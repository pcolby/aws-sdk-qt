// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_DELETEACCESSPOINTFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "deleteaccesspointforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointForObjectLambdaRequest;

class DeleteAccessPointForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    DeleteAccessPointForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   DeleteAccessPointForObjectLambdaRequest * const q);
    DeleteAccessPointForObjectLambdaRequestPrivate(const DeleteAccessPointForObjectLambdaRequestPrivate &other,
                                   DeleteAccessPointForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
