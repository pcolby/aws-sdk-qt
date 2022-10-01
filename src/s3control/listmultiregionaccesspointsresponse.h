// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIREGIONACCESSPOINTSRESPONSE_H
#define QTAWS_LISTMULTIREGIONACCESSPOINTSRESPONSE_H

#include "s3controlresponse.h"
#include "listmultiregionaccesspointsrequest.h"

namespace QtAws {
namespace S3Control {

class ListMultiRegionAccessPointsResponsePrivate;

class QTAWSS3CONTROL_EXPORT ListMultiRegionAccessPointsResponse : public S3ControlResponse {
    Q_OBJECT

public:
    ListMultiRegionAccessPointsResponse(const ListMultiRegionAccessPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMultiRegionAccessPointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiRegionAccessPointsResponse)
    Q_DISABLE_COPY(ListMultiRegionAccessPointsResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
