// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONVERSIONREQUEST_P_H
#define QTAWS_GETFUNCTIONDEFINITIONVERSIONREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getfunctiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionVersionRequest;

class GetFunctionDefinitionVersionRequestPrivate : public GreengrassRequestPrivate {

public:
    GetFunctionDefinitionVersionRequestPrivate(const GreengrassRequest::Action action,
                                   GetFunctionDefinitionVersionRequest * const q);
    GetFunctionDefinitionVersionRequestPrivate(const GetFunctionDefinitionVersionRequestPrivate &other,
                                   GetFunctionDefinitionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
