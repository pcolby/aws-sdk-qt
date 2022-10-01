// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyForObjectLambdaResponse;

class DeleteAccessPointPolicyForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteAccessPointPolicyForObjectLambdaResponsePrivate(DeleteAccessPointPolicyForObjectLambdaResponse * const q);

    void parseDeleteAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointPolicyForObjectLambdaResponse)
    Q_DISABLE_COPY(DeleteAccessPointPolicyForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
