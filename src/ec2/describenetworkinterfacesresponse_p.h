// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACESRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINTERFACESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacesResponse;

class DescribeNetworkInterfacesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInterfacesResponsePrivate(DescribeNetworkInterfacesResponse * const q);

    void parseDescribeNetworkInterfacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInterfacesResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfacesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
