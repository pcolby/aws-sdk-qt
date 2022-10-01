// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNEREVENTSOURCERESPONSE_P_H
#define QTAWS_DESCRIBEPARTNEREVENTSOURCERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DescribePartnerEventSourceResponse;

class DescribePartnerEventSourceResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DescribePartnerEventSourceResponsePrivate(DescribePartnerEventSourceResponse * const q);

    void parseDescribePartnerEventSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePartnerEventSourceResponse)
    Q_DISABLE_COPY(DescribePartnerEventSourceResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
