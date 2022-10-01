// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONURLCONFIGREQUEST_P_H
#define QTAWS_DELETEFUNCTIONURLCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletefunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteFunctionUrlConfigRequest;

class DeleteFunctionUrlConfigRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteFunctionUrlConfigRequestPrivate(const LambdaRequest::Action action,
                                   DeleteFunctionUrlConfigRequest * const q);
    DeleteFunctionUrlConfigRequestPrivate(const DeleteFunctionUrlConfigRequestPrivate &other,
                                   DeleteFunctionUrlConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
