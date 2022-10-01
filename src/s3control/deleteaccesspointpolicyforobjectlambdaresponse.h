// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_H
#define QTAWS_DELETEACCESSPOINTPOLICYFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "deleteaccesspointpolicyforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointPolicyForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteAccessPointPolicyForObjectLambdaResponse(const DeleteAccessPointPolicyForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessPointPolicyForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointPolicyForObjectLambdaResponse)
    Q_DISABLE_COPY(DeleteAccessPointPolicyForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
