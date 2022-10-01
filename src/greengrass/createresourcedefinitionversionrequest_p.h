// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATERESOURCEDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createresourcedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionVersionRequest;

class CreateResourceDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateResourceDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateResourceDefinitionVersionRequest * const q);
    CreateResourceDefinitionVersionRequestPrivate(const CreateResourceDefinitionVersionRequestPrivate &other,
                                   CreateResourceDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
