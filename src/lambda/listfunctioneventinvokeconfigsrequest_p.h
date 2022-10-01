// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSREQUEST_P_H
#define QTAWS_LISTFUNCTIONEVENTINVOKECONFIGSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listfunctioneventinvokeconfigsrequest.h"

namespace QtAws {
namespace Lambda {

class ListFunctionEventInvokeConfigsRequest;

class ListFunctionEventInvokeConfigsRequestPrivate : public LambdaRequestPrivate {

public:
    ListFunctionEventInvokeConfigsRequestPrivate(const LambdaRequest::Action action,
                                   ListFunctionEventInvokeConfigsRequest * const q);
    ListFunctionEventInvokeConfigsRequestPrivate(const ListFunctionEventInvokeConfigsRequestPrivate &other,
                                   ListFunctionEventInvokeConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFunctionEventInvokeConfigsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
