// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEDEFINITIONREQUEST_P_H
#define QTAWS_DELETEDEVICEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "deletedevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteDeviceDefinitionRequest;

class DeleteDeviceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    DeleteDeviceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   DeleteDeviceDefinitionRequest * const q);
    DeleteDeviceDefinitionRequestPrivate(const DeleteDeviceDefinitionRequestPrivate &other,
                                   DeleteDeviceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
