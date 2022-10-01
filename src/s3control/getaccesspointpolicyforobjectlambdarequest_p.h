// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_GETACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointpolicyforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyForObjectLambdaRequest;

class GetAccessPointPolicyForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointPolicyForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointPolicyForObjectLambdaRequest * const q);
    GetAccessPointPolicyForObjectLambdaRequestPrivate(const GetAccessPointPolicyForObjectLambdaRequestPrivate &other,
                                   GetAccessPointPolicyForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
