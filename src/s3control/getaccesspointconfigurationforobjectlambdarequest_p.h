// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getaccesspointconfigurationforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointConfigurationForObjectLambdaRequest;

class GetAccessPointConfigurationForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    GetAccessPointConfigurationForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   GetAccessPointConfigurationForObjectLambdaRequest * const q);
    GetAccessPointConfigurationForObjectLambdaRequestPrivate(const GetAccessPointConfigurationForObjectLambdaRequestPrivate &other,
                                   GetAccessPointConfigurationForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessPointConfigurationForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
