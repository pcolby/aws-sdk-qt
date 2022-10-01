// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusForObjectLambdaResponse;

class GetAccessPointPolicyStatusForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetAccessPointPolicyStatusForObjectLambdaResponsePrivate(GetAccessPointPolicyStatusForObjectLambdaResponse * const q);

    void parseGetAccessPointPolicyStatusForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyStatusForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyStatusForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
