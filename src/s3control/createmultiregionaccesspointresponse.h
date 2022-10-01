// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIREGIONACCESSPOINTRESPONSE_H
#define QTAWS_CREATEMULTIREGIONACCESSPOINTRESPONSE_H

#include "s3controlresponse.h"
#include "createmultiregionaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class CreateMultiRegionAccessPointResponsePrivate;

class QTAWSS3CONTROL_EXPORT CreateMultiRegionAccessPointResponse : public S3ControlResponse {
    Q_OBJECT

public:
    CreateMultiRegionAccessPointResponse(const CreateMultiRegionAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMultiRegionAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultiRegionAccessPointResponse)
    Q_DISABLE_COPY(CreateMultiRegionAccessPointResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
