// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCONCURRENCYREQUEST_P_H
#define QTAWS_PUTFUNCTIONCONCURRENCYREQUEST_P_H

#include "lambdarequest_p.h"
#include "putfunctionconcurrencyrequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionConcurrencyRequest;

class PutFunctionConcurrencyRequestPrivate : public LambdaRequestPrivate {

public:
    PutFunctionConcurrencyRequestPrivate(const LambdaRequest::Action action,
                                   PutFunctionConcurrencyRequest * const q);
    PutFunctionConcurrencyRequestPrivate(const PutFunctionConcurrencyRequestPrivate &other,
                                   PutFunctionConcurrencyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFunctionConcurrencyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
