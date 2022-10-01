// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_H
#define QTAWS_GETACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointpolicyforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointPolicyForObjectLambdaResponse(const GetAccessPointPolicyForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointPolicyForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
