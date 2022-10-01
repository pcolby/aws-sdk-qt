// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIREGIONACCESSPOINTRESPONSE_P_H
#define QTAWS_DELETEMULTIREGIONACCESSPOINTRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteMultiRegionAccessPointResponse;

class DeleteMultiRegionAccessPointResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteMultiRegionAccessPointResponsePrivate(DeleteMultiRegionAccessPointResponse * const q);

    void parseDeleteMultiRegionAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMultiRegionAccessPointResponse)
    Q_DISABLE_COPY(DeleteMultiRegionAccessPointResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
