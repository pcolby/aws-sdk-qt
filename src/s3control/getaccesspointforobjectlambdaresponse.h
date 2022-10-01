// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTFOROBJECTLAMBDARESPONSE_H
#define QTAWS_GETACCESSPOINTFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointForObjectLambdaResponse(const GetAccessPointForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
