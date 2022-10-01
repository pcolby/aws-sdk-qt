// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTAUTHORIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTAUTHORIZATIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAuthorizationResponse;

class DescribeEndpointAuthorizationResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeEndpointAuthorizationResponsePrivate(DescribeEndpointAuthorizationResponse * const q);

    void parseDescribeEndpointAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointAuthorizationResponse)
    Q_DISABLE_COPY(DescribeEndpointAuthorizationResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
