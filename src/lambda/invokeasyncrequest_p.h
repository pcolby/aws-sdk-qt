// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEASYNCREQUEST_P_H
#define QTAWS_INVOKEASYNCREQUEST_P_H

#include "lambdarequest_p.h"
#include "invokeasyncrequest.h"

namespace QtAws {
namespace Lambda {

class InvokeAsyncRequest;

class InvokeAsyncRequestPrivate : public LambdaRequestPrivate {

public:
    InvokeAsyncRequestPrivate(const LambdaRequest::Action action,
                                   InvokeAsyncRequest * const q);
    InvokeAsyncRequestPrivate(const InvokeAsyncRequestPrivate &other,
                                   InvokeAsyncRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvokeAsyncRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
