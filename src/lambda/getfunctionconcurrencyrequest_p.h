// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONCURRENCYREQUEST_P_H
#define QTAWS_GETFUNCTIONCONCURRENCYREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctionconcurrencyrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConcurrencyRequest;

class GetFunctionConcurrencyRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionConcurrencyRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionConcurrencyRequest * const q);
    GetFunctionConcurrencyRequestPrivate(const GetFunctionConcurrencyRequestPrivate &other,
                                   GetFunctionConcurrencyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionConcurrencyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
