// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDARESPONSE_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointpolicystatusforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyStatusForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointPolicyStatusForObjectLambdaResponse(const GetAccessPointPolicyStatusForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointPolicyStatusForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyStatusForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyStatusForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
