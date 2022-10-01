// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointpolicystatusforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusForObjectLambdaRequest;

class GetAccessPointPolicyStatusForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointPolicyStatusForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointPolicyStatusForObjectLambdaRequest * const q);
    GetAccessPointPolicyStatusForObjectLambdaRequestPrivate(const GetAccessPointPolicyStatusForObjectLambdaRequestPrivate &other,
                                   GetAccessPointPolicyStatusForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyStatusForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
