// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTFOROBJECTLAMBDARESPONSE_H
#define QTAWS_CREATEACCESSPOINTFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "createaccesspointforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class CreateAccessPointForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT CreateAccessPointForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    CreateAccessPointForObjectLambdaResponse(const CreateAccessPointForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessPointForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPointForObjectLambdaResponse)
    Q_DISABLE_COPY(CreateAccessPointForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
