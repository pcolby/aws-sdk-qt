// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONURLCONFIGREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONURLCONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "updatefunctionurlconfigrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionUrlConfigRequest;

class UpdateFunctionUrlConfigRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateFunctionUrlConfigRequestPrivate(const LambdaRequest::Action action,
                                   UpdateFunctionUrlConfigRequest * const q);
    UpdateFunctionUrlConfigRequestPrivate(const UpdateFunctionUrlConfigRequestPrivate &other,
                                   UpdateFunctionUrlConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
