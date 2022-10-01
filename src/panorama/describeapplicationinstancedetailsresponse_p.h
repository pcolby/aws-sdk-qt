// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceDetailsResponse;

class DescribeApplicationInstanceDetailsResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribeApplicationInstanceDetailsResponsePrivate(DescribeApplicationInstanceDetailsResponse * const q);

    void parseDescribeApplicationInstanceDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationInstanceDetailsResponse)
    Q_DISABLE_COPY(DescribeApplicationInstanceDetailsResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
