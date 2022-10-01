// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTCONFIGURATIONFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_PUTACCESSPOINTCONFIGURATIONFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putaccesspointconfigurationforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointConfigurationForObjectLambdaRequest;

class PutAccessPointConfigurationForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    PutAccessPointConfigurationForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   PutAccessPointConfigurationForObjectLambdaRequest * const q);
    PutAccessPointConfigurationForObjectLambdaRequestPrivate(const PutAccessPointConfigurationForObjectLambdaRequestPrivate &other,
                                   PutAccessPointConfigurationForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccessPointConfigurationForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
