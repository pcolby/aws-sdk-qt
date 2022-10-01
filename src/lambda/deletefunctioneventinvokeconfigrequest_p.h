// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONEVENTINVOKECONFIGREQUEST_P_H
#define QTAWS_DELETEFUNCTIONEVENTINVOKECONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletefunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionEventInvokeConfigRequest;

class DeleteFunctionEventInvokeConfigRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteFunctionEventInvokeConfigRequestPrivate(const LambdaRequest::Action action,
                                   DeleteFunctionEventInvokeConfigRequest * const q);
    DeleteFunctionEventInvokeConfigRequestPrivate(const DeleteFunctionEventInvokeConfigRequestPrivate &other,
                                   DeleteFunctionEventInvokeConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
