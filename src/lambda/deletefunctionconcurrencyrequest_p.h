// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONCONCURRENCYREQUEST_P_H
#define QTAWS_DELETEFUNCTIONCONCURRENCYREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletefunctionconcurrencyrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionConcurrencyRequest;

class DeleteFunctionConcurrencyRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteFunctionConcurrencyRequestPrivate(const LambdaRequest::Action action,
                                   DeleteFunctionConcurrencyRequest * const q);
    DeleteFunctionConcurrencyRequestPrivate(const DeleteFunctionConcurrencyRequestPrivate &other,
                                   DeleteFunctionConcurrencyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionConcurrencyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
