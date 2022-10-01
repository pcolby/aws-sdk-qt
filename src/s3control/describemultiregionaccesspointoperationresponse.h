// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONRESPONSE_H
#define QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONRESPONSE_H

#include "s3controlresponse.h"
#include "describemultiregionaccesspointoperationrequest.h"

namespace QtAws {
namespace S3Control {

class DescribeMultiRegionAccessPointOperationResponsePrivate;

class QTAWSS3CONTROL_EXPORT DescribeMultiRegionAccessPointOperationResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DescribeMultiRegionAccessPointOperationResponse(const DescribeMultiRegionAccessPointOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMultiRegionAccessPointOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMultiRegionAccessPointOperationResponse)
    Q_DISABLE_COPY(DescribeMultiRegionAccessPointOperationResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
