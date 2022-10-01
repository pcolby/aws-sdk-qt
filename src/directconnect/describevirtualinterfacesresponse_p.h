// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALINTERFACESRESPONSE_P_H
#define QTAWS_DESCRIBEVIRTUALINTERFACESRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeVirtualInterfacesResponse;

class DescribeVirtualInterfacesResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeVirtualInterfacesResponsePrivate(DescribeVirtualInterfacesResponse * const q);

    void parseDescribeVirtualInterfacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVirtualInterfacesResponse)
    Q_DISABLE_COPY(DescribeVirtualInterfacesResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
