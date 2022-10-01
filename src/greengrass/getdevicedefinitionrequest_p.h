// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONREQUEST_P_H
#define QTAWS_GETDEVICEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getdevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionRequest;

class GetDeviceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetDeviceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetDeviceDefinitionRequest * const q);
    GetDeviceDefinitionRequestPrivate(const GetDeviceDefinitionRequestPrivate &other,
                                   GetDeviceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
