// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONREQUEST_P_H
#define QTAWS_GETFUNCTIONDEFINITIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getfunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionRequest;

class GetFunctionDefinitionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetFunctionDefinitionRequestPrivate(const GreengrassRequest::Action action,
                                   GetFunctionDefinitionRequest * const q);
    GetFunctionDefinitionRequestPrivate(const GetFunctionDefinitionRequestPrivate &other,
                                   GetFunctionDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
