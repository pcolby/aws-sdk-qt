// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTINGPROFILERESPONSE_P_H
#define QTAWS_DESCRIBEROUTINGPROFILERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeRoutingProfileResponse;

class DescribeRoutingProfileResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeRoutingProfileResponsePrivate(DescribeRoutingProfileResponse * const q);

    void parseDescribeRoutingProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRoutingProfileResponse)
    Q_DISABLE_COPY(DescribeRoutingProfileResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
