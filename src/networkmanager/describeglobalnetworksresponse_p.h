// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALNETWORKSRESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALNETWORKSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DescribeGlobalNetworksResponse;

class DescribeGlobalNetworksResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DescribeGlobalNetworksResponsePrivate(DescribeGlobalNetworksResponse * const q);

    void parseDescribeGlobalNetworksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalNetworksResponse)
    Q_DISABLE_COPY(DescribeGlobalNetworksResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
