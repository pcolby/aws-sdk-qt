// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTFOROBJECTLAMBDARESPONSE_H
#define QTAWS_DELETEACCESSPOINTFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "deleteaccesspointforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteAccessPointForObjectLambdaResponse(const DeleteAccessPointForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessPointForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointForObjectLambdaResponse)
    Q_DISABLE_COPY(DeleteAccessPointForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
