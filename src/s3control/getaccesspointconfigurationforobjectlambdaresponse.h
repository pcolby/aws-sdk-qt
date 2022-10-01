// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_H
#define QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointconfigurationforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointConfigurationForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointConfigurationForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointConfigurationForObjectLambdaResponse(const GetAccessPointConfigurationForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointConfigurationForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointConfigurationForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointConfigurationForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
