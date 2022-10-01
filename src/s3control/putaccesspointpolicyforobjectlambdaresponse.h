// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_H
#define QTAWS_PUTACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "putaccesspointpolicyforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutAccessPointPolicyForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutAccessPointPolicyForObjectLambdaResponse(const PutAccessPointPolicyForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccessPointPolicyForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccessPointPolicyForObjectLambdaResponse)
    Q_DISABLE_COPY(PutAccessPointPolicyForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
