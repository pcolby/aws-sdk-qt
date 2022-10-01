// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfaceAttributeResponse;

class DescribeNetworkInterfaceAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInterfaceAttributeResponsePrivate(DescribeNetworkInterfaceAttributeResponse * const q);

    void parseDescribeNetworkInterfaceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(DescribeNetworkInterfaceAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
