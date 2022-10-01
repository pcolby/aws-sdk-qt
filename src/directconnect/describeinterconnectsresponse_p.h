// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTSRESPONSE_P_H
#define QTAWS_DESCRIBEINTERCONNECTSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectsResponse;

class DescribeInterconnectsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeInterconnectsResponsePrivate(DescribeInterconnectsResponse * const q);

    void parseDescribeInterconnectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInterconnectsResponse)
    Q_DISABLE_COPY(DescribeInterconnectsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
