// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEREQUEST_P_H
#define QTAWS_INVOKEREQUEST_P_H

#include "lambdarequest_p.h"
#include "invokerequest.h"

namespace QtAws {
namespace Lambda {

class InvokeRequest;

class InvokeRequestPrivate : public LambdaRequestPrivate {

public:
    InvokeRequestPrivate(const LambdaRequest::Action action,
                                   InvokeRequest * const q);
    InvokeRequestPrivate(const InvokeRequestPrivate &other,
                                   InvokeRequest * const q);

private:
    Q_DECLARE_PUBLIC(InvokeRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
