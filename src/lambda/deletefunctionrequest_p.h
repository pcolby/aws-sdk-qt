// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONREQUEST_P_H
#define QTAWS_DELETEFUNCTIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletefunctionrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionRequest;

class DeleteFunctionRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteFunctionRequestPrivate(const LambdaRequest::Action action,
                                   DeleteFunctionRequest * const q);
    DeleteFunctionRequestPrivate(const DeleteFunctionRequestPrivate &other,
                                   DeleteFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
