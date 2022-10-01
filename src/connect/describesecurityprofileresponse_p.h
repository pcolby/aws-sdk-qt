// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILERESPONSE_P_H
#define QTAWS_DESCRIBESECURITYPROFILERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeSecurityProfileResponse;

class DescribeSecurityProfileResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeSecurityProfileResponsePrivate(DescribeSecurityProfileResponse * const q);

    void parseDescribeSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityProfileResponse)
    Q_DISABLE_COPY(DescribeSecurityProfileResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
