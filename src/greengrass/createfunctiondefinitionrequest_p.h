// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONDEFINITIONREQUEST_P_H
#define QTAWS_CREATEFUNCTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createfunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateFunctionDefinitionRequest;

class CreateFunctionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateFunctionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateFunctionDefinitionRequest * const q);
    CreateFunctionDefinitionRequestPrivate(const CreateFunctionDefinitionRequestPrivate &other,
                                   CreateFunctionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
