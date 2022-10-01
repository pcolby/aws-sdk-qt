// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deleteaccesspointpolicyforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyForObjectLambdaRequest;

class DeleteAccessPointPolicyForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteAccessPointPolicyForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteAccessPointPolicyForObjectLambdaRequest * const q);
    DeleteAccessPointPolicyForObjectLambdaRequestPrivate(const DeleteAccessPointPolicyForObjectLambdaRequestPrivate &other,
                                   DeleteAccessPointPolicyForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointPolicyForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
