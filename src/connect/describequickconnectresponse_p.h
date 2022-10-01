// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUICKCONNECTRESPONSE_P_H
#define QTAWS_DESCRIBEQUICKCONNECTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeQuickConnectResponse;

class DescribeQuickConnectResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeQuickConnectResponsePrivate(DescribeQuickConnectResponse * const q);

    void parseDescribeQuickConnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQuickConnectResponse)
    Q_DISABLE_COPY(DescribeQuickConnectResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
