// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIREGIONACCESSPOINTRESPONSE_P_H
#define QTAWS_CREATEMULTIREGIONACCESSPOINTRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class CreateMultiRegionAccessPointResponse;

class CreateMultiRegionAccessPointResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit CreateMultiRegionAccessPointResponsePrivate(CreateMultiRegionAccessPointResponse * const q);

    void parseCreateMultiRegionAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMultiRegionAccessPointResponse)
    Q_DISABLE_COPY(CreateMultiRegionAccessPointResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
