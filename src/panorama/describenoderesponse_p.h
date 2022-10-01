// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODERESPONSE_P_H
#define QTAWS_DESCRIBENODERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeResponse;

class DescribeNodeResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribeNodeResponsePrivate(DescribeNodeResponse * const q);

    void parseDescribeNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNodeResponse)
    Q_DISABLE_COPY(DescribeNodeResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
