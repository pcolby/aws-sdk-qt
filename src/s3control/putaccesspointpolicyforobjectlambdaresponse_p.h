// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_PUTACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyForObjectLambdaResponse;

class PutAccessPointPolicyForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutAccessPointPolicyForObjectLambdaResponsePrivate(PutAccessPointPolicyForObjectLambdaResponse * const q);

    void parsePutAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccessPointPolicyForObjectLambdaResponse)
    Q_DISABLE_COPY(PutAccessPointPolicyForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
