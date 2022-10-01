// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONEVENTINVOKECONFIGREQUEST_P_H
#define QTAWS_PUTFUNCTIONEVENTINVOKECONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "putfunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionEventInvokeConfigRequest;

class PutFunctionEventInvokeConfigRequestPrivate : public LambdaRequestPrivate {

public:
    PutFunctionEventInvokeConfigRequestPrivate(const LambdaRequest::Action action,
                                   PutFunctionEventInvokeConfigRequest * const q);
    PutFunctionEventInvokeConfigRequestPrivate(const PutFunctionEventInvokeConfigRequestPrivate &other,
                                   PutFunctionEventInvokeConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
