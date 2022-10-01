// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_GETACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyForObjectLambdaResponse;

class GetAccessPointPolicyForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetAccessPointPolicyForObjectLambdaResponsePrivate(GetAccessPointPolicyForObjectLambdaResponse * const q);

    void parseGetAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
