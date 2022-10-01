// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUEUERESPONSE_P_H
#define QTAWS_DESCRIBEQUEUERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeQueueResponse;

class DescribeQueueResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeQueueResponsePrivate(DescribeQueueResponse * const q);

    void parseDescribeQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQueueResponse)
    Q_DISABLE_COPY(DescribeQueueResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
