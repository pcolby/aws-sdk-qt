// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONLOARESPONSE_P_H
#define QTAWS_DESCRIBECONNECTIONLOARESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionLoaResponse;

class DescribeConnectionLoaResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeConnectionLoaResponsePrivate(DescribeConnectionLoaResponse * const q);

    void parseDescribeConnectionLoaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionLoaResponse)
    Q_DISABLE_COPY(DescribeConnectionLoaResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
