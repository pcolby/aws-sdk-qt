// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_GETACCESSPOINTFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointForObjectLambdaRequest;

class GetAccessPointForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointForObjectLambdaRequest * const q);
    GetAccessPointForObjectLambdaRequestPrivate(const GetAccessPointForObjectLambdaRequestPrivate &other,
                                   GetAccessPointForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
