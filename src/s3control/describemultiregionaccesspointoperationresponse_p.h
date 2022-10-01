// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONRESPONSE_P_H
#define QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DescribeMultiRegionAccessPointOperationResponse;

class DescribeMultiRegionAccessPointOperationResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DescribeMultiRegionAccessPointOperationResponsePrivate(DescribeMultiRegionAccessPointOperationResponse * const q);

    void parseDescribeMultiRegionAccessPointOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMultiRegionAccessPointOperationResponse)
    Q_DISABLE_COPY(DescribeMultiRegionAccessPointOperationResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
