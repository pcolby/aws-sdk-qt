// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONVERSIONSREQUEST_P_H
#define QTAWS_LISTFUNCTIONDEFINITIONVERSIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listfunctiondefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionVersionsRequest;

class ListFunctionDefinitionVersionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListFunctionDefinitionVersionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListFunctionDefinitionVersionsRequest * const q);
    ListFunctionDefinitionVersionsRequestPrivate(const ListFunctionDefinitionVersionsRequestPrivate &other,
                                   ListFunctionDefinitionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFunctionDefinitionVersionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
