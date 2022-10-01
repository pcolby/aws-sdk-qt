// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_CREATEFUNCTIONDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createfunctiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateFunctionDefinitionVersionRequest;

class CreateFunctionDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateFunctionDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   CreateFunctionDefinitionVersionRequest * const q);
    CreateFunctionDefinitionVersionRequestPrivate(const CreateFunctionDefinitionVersionRequestPrivate &other,
                                   CreateFunctionDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFunctionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
