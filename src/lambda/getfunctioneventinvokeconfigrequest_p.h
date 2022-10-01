// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONEVENTINVOKECONFIGREQUEST_P_H
#define QTAWS_GETFUNCTIONEVENTINVOKECONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionEventInvokeConfigRequest;

class GetFunctionEventInvokeConfigRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionEventInvokeConfigRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionEventInvokeConfigRequest * const q);
    GetFunctionEventInvokeConfigRequestPrivate(const GetFunctionEventInvokeConfigRequestPrivate &other,
                                   GetFunctionEventInvokeConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
