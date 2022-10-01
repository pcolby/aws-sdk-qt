// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONREQUEST_P_H
#define QTAWS_CREATERESOURCEDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionRequest;

class CreateResourceDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateResourceDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateResourceDefinitionRequest * const q);
    CreateResourceDefinitionRequestPrivate(const CreateResourceDefinitionRequestPrivate &other,
                                   CreateResourceDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
