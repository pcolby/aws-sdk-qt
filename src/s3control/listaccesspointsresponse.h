// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSRESPONSE_H
#define QTAWS_LISTACCESSPOINTSRESPONSE_H

#include "s3controlresponse.h"
#include "listaccesspointsrequest.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsResponsePrivate;

class QTAWSS3CONTROL_EXPORT ListAccessPointsResponse : public S3ControlResponse {
    Q_OBJECT

public:
    ListAccessPointsResponse(const ListAccessPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessPointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessPointsResponse)
    Q_DISABLE_COPY(ListAccessPointsResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
