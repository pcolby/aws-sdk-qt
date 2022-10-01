// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONREQUEST_P_H
#define QTAWS_GETFUNCTIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctionrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionRequest;

class GetFunctionRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionRequest * const q);
    GetFunctionRequestPrivate(const GetFunctionRequestPrivate &other,
                                   GetFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
