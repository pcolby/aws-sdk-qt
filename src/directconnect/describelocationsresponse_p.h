// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLocationsResponse;

class DescribeLocationsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeLocationsResponsePrivate(DescribeLocationsResponse * const q);

    void parseDescribeLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationsResponse)
    Q_DISABLE_COPY(DescribeLocationsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
