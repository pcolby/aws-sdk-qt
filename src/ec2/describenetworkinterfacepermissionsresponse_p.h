// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacePermissionsResponse;

class DescribeNetworkInterfacePermissionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInterfacePermissionsResponsePrivate(DescribeNetworkInterfacePermissionsResponse * const q);

    void parseDescribeNetworkInterfacePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInterfacePermissionsResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfacePermissionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
