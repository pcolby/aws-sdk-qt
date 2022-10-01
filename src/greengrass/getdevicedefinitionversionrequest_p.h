// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETDEVICEDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getdevicedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionVersionRequest;

class GetDeviceDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetDeviceDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetDeviceDefinitionVersionRequest * const q);
    GetDeviceDefinitionVersionRequestPrivate(const GetDeviceDefinitionVersionRequestPrivate &other,
                                   GetDeviceDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
