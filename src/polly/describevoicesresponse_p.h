// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOICESRESPONSE_P_H
#define QTAWS_DESCRIBEVOICESRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class DescribeVoicesResponse;

class DescribeVoicesResponsePrivate : public PollyResponsePrivate {

public:

    explicit DescribeVoicesResponsePrivate(DescribeVoicesResponse * const q);

    void parseDescribeVoicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVoicesResponse)
    Q_DISABLE_COPY(DescribeVoicesResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
