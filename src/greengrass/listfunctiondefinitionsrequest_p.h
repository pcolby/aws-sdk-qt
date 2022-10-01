// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONSREQUEST_P_H
#define QTAWS_LISTFUNCTIONDEFINITIONSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listfunctiondefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionsRequest;

class ListFunctionDefinitionsRequestPrivate : public GreengrassRequestPrivate {

public:
    ListFunctionDefinitionsRequestPrivate(const GreengrassRequest::Action action,
                                   ListFunctionDefinitionsRequest * const q);
    ListFunctionDefinitionsRequestPrivate(const ListFunctionDefinitionsRequestPrivate &other,
                                   ListFunctionDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFunctionDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
