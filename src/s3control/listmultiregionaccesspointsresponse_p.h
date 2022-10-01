// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIREGIONACCESSPOINTSRESPONSE_P_H
#define QTAWS_LISTMULTIREGIONACCESSPOINTSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class ListMultiRegionAccessPointsResponse;

class ListMultiRegionAccessPointsResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit ListMultiRegionAccessPointsResponsePrivate(ListMultiRegionAccessPointsResponse * const q);

    void parseListMultiRegionAccessPointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMultiRegionAccessPointsResponse)
    Q_DISABLE_COPY(ListMultiRegionAccessPointsResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
