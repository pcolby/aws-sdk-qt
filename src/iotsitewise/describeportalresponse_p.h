// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPORTALRESPONSE_P_H
#define QTAWS_DESCRIBEPORTALRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribePortalResponse;

class DescribePortalResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribePortalResponsePrivate(DescribePortalResponse * const q);

    void parseDescribePortalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePortalResponse)
    Q_DISABLE_COPY(DescribePortalResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
