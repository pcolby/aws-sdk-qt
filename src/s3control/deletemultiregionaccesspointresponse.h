// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIREGIONACCESSPOINTRESPONSE_H
#define QTAWS_DELETEMULTIREGIONACCESSPOINTRESPONSE_H

#include "s3controlresponse.h"
#include "deletemultiregionaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteMultiRegionAccessPointResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteMultiRegionAccessPointResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteMultiRegionAccessPointResponse(const DeleteMultiRegionAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMultiRegionAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMultiRegionAccessPointResponse)
    Q_DISABLE_COPY(DeleteMultiRegionAccessPointResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
