// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONREQUEST_P_H
#define QTAWS_CREATEDEVICEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createdevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionRequest;

class CreateDeviceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateDeviceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateDeviceDefinitionRequest * const q);
    CreateDeviceDefinitionRequestPrivate(const CreateDeviceDefinitionRequestPrivate &other,
                                   CreateDeviceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeviceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
