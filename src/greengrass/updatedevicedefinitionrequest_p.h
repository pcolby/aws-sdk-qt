// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEDEFINITIONREQUEST_P_H
#define QTAWS_UPDATEDEVICEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "updatedevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateDeviceDefinitionRequest;

class UpdateDeviceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    UpdateDeviceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   UpdateDeviceDefinitionRequest * const q);
    UpdateDeviceDefinitionRequestPrivate(const UpdateDeviceDefinitionRequestPrivate &other,
                                   UpdateDeviceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
