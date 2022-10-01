// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeApplicationFleetAssociationsResponse;

class DescribeApplicationFleetAssociationsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeApplicationFleetAssociationsResponsePrivate(DescribeApplicationFleetAssociationsResponse * const q);

    void parseDescribeApplicationFleetAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationFleetAssociationsResponse)
    Q_DISABLE_COPY(DescribeApplicationFleetAssociationsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
