// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDARESPONSE_H
#define QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDARESPONSE_H

#include "s3controlresponse.h"
#include "listaccesspointsforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsForObjectLambdaResponsePrivate;

class QTAWSS3CONTROL_EXPORT ListAccessPointsForObjectLambdaResponse : public S3ControlResponse {
    Q_OBJECT

public:
    ListAccessPointsForObjectLambdaResponse(const ListAccessPointsForObjectLambdaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessPointsForObjectLambdaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPointsForObjectLambdaResponse)
    Q_DISABLE_COPY(ListAccessPointsForObjectLambdaResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
