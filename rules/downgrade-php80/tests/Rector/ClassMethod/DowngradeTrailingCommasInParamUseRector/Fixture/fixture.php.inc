<?php

namespace Rector\DowngradePhp80\Tests\Rector\ClassMethod\DowngradeTrailingCommasInParamUseRector\Fixture;

class SomeClass
{
    public function __construct(string $value1, string $value2,)
    {
    }
}

?>
-----
<?php

namespace Rector\DowngradePhp80\Tests\Rector\ClassMethod\DowngradeTrailingCommasInParamUseRector\Fixture;

class SomeClass
{
    public function __construct(string $value1, string $value2)
    {
    }
}

?>
