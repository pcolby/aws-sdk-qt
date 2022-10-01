// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_CREATEACCESSPOINTFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "createaccesspointforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class CreateAccessPointForObjectLambdaRequest;

class CreateAccessPointForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    CreateAccessPointForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   CreateAccessPointForObjectLambdaRequest * const q);
    CreateAccessPointForObjectLambdaRequestPrivate(const CreateAccessPointForObjectLambdaRequestPrivate &other,
                                   CreateAccessPointForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessPointForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
