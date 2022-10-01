// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTRESPONSE_P_H
#define QTAWS_GETMULTIREGIONACCESSPOINTRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointResponse;

class GetMultiRegionAccessPointResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetMultiRegionAccessPointResponsePrivate(GetMultiRegionAccessPointResponse * const q);

    void parseGetMultiRegionAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMultiRegionAccessPointResponse)
    Q_DISABLE_COPY(GetMultiRegionAccessPointResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
