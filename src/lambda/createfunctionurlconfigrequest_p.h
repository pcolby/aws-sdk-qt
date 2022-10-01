// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONURLCONFIGREQUEST_P_H
#define QTAWS_CREATEFUNCTIONURLCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "createfunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionUrlConfigRequest;

class CreateFunctionUrlConfigRequestPrivate : public LambdaRequestPrivate {

public:
    CreateFunctionUrlConfigRequestPrivate(const LambdaRequest::Action action,
                                   CreateFunctionUrlConfigRequest * const q);
    CreateFunctionUrlConfigRequestPrivate(const CreateFunctionUrlConfigRequestPrivate &other,
                                   CreateFunctionUrlConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
