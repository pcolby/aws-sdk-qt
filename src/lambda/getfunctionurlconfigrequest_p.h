// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONURLCONFIGREQUEST_P_H
#define QTAWS_GETFUNCTIONURLCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionUrlConfigRequest;

class GetFunctionUrlConfigRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionUrlConfigRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionUrlConfigRequest * const q);
    GetFunctionUrlConfigRequestPrivate(const GetFunctionUrlConfigRequestPrivate &other,
                                   GetFunctionUrlConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
