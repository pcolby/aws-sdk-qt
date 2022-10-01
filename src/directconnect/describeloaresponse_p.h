// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOARESPONSE_P_H
#define QTAWS_DESCRIBELOARESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLoaResponse;

class DescribeLoaResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeLoaResponsePrivate(DescribeLoaResponse * const q);

    void parseDescribeLoaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoaResponse)
    Q_DISABLE_COPY(DescribeLoaResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
