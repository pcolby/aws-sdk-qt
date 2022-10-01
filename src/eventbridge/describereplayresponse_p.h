// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLAYRESPONSE_P_H
#define QTAWS_DESCRIBEREPLAYRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DescribeReplayResponse;

class DescribeReplayResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DescribeReplayResponsePrivate(DescribeReplayResponse * const q);

    void parseDescribeReplayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplayResponse)
    Q_DISABLE_COPY(DescribeReplayResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
