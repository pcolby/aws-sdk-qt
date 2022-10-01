// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGRUNTIMECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATETHINGRUNTIMECONFIGURATIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updatethingruntimeconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateThingRuntimeConfigurationRequest;

class UpdateThingRuntimeConfigurationRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateThingRuntimeConfigurationRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateThingRuntimeConfigurationRequest * const q);
    UpdateThingRuntimeConfigurationRequestPrivate(const UpdateThingRuntimeConfigurationRequestPrivate &other,
                                   UpdateThingRuntimeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThingRuntimeConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
