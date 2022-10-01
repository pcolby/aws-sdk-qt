// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "updatefunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionEventInvokeConfigRequest;

class UpdateFunctionEventInvokeConfigRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateFunctionEventInvokeConfigRequestPrivate(const LambdaRequest::Action action,
                                   UpdateFunctionEventInvokeConfigRequest * const q);
    UpdateFunctionEventInvokeConfigRequestPrivate(const UpdateFunctionEventInvokeConfigRequestPrivate &other,
                                   UpdateFunctionEventInvokeConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
