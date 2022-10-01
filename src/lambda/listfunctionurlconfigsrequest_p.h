// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONURLCONFIGSREQUEST_P_H
#define QTAWS_LISTFUNCTIONURLCONFIGSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listfunctionurlconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionUrlConfigsRequest;

class ListFunctionUrlConfigsRequestPrivate : public LambdaRequestPrivate {

public:
    ListFunctionUrlConfigsRequestPrivate(const LambdaRequest::Action action,
                                   ListFunctionUrlConfigsRequest * const q);
    ListFunctionUrlConfigsRequestPrivate(const ListFunctionUrlConfigsRequestPrivate &other,
                                   ListFunctionUrlConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFunctionUrlConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
