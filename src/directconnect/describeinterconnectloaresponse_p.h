// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTLOARESPONSE_P_H
#define QTAWS_DESCRIBEINTERCONNECTLOARESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectLoaResponse;

class DescribeInterconnectLoaResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeInterconnectLoaResponsePrivate(DescribeInterconnectLoaResponse * const q);

    void parseDescribeInterconnectLoaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInterconnectLoaResponse)
    Q_DISABLE_COPY(DescribeInterconnectLoaResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
