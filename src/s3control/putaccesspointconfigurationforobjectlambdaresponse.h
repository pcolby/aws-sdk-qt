// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_H
#define QTAWS_PUTACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "putaccesspointconfigurationforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointConfigurationForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutAccessPointConfigurationForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutAccessPointConfigurationForObjectLambdaResponse(const PutAccessPointConfigurationForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccessPointConfigurationForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccessPointConfigurationForObjectLambdaResponse)
    Q_DISABLE_COPY(PutAccessPointConfigurationForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
