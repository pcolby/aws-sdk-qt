// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATEDEVICEDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createdevicedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionVersionRequest;

class CreateDeviceDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateDeviceDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateDeviceDefinitionVersionRequest * const q);
    CreateDeviceDefinitionVersionRequestPrivate(const CreateDeviceDefinitionVersionRequestPrivate &other,
                                   CreateDeviceDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeviceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
