// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGRUNTIMECONFIGURATIONREQUEST_P_H
#define QTAWS_GETTHINGRUNTIMECONFIGURATIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getthingruntimeconfigurationrequest.h"

namespace QtAws {
namespace Greengrass {

class GetThingRuntimeConfigurationRequest;

class GetThingRuntimeConfigurationRequestPrivate : public GreengrassRequestPrivate {

public:
    GetThingRuntimeConfigurationRequestPrivate(const GreengrassRequest::Action action,
                                   GetThingRuntimeConfigurationRequest * const q);
    GetThingRuntimeConfigurationRequestPrivate(const GetThingRuntimeConfigurationRequestPrivate &other,
                                   GetThingRuntimeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetThingRuntimeConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
