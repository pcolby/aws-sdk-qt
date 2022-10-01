// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_PUTACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putaccesspointpolicyforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyForObjectLambdaRequest;

class PutAccessPointPolicyForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    PutAccessPointPolicyForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   PutAccessPointPolicyForObjectLambdaRequest * const q);
    PutAccessPointPolicyForObjectLambdaRequestPrivate(const PutAccessPointPolicyForObjectLambdaRequestPrivate &other,
                                   PutAccessPointPolicyForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccessPointPolicyForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
