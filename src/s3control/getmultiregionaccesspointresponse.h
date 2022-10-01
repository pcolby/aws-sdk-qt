// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTRESPONSE_H
#define QTAWS_GETMULTIREGIONACCESSPOINTRESPONSE_H

#include "s3controlresponse.h"
#include "getmultiregionaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetMultiRegionAccessPointResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetMultiRegionAccessPointResponse(const GetMultiRegionAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMultiRegionAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMultiRegionAccessPointResponse)
    Q_DISABLE_COPY(GetMultiRegionAccessPointResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
