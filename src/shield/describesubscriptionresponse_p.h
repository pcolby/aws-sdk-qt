// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DESCRIBESUBSCRIPTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeSubscriptionResponse;

class DescribeSubscriptionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeSubscriptionResponsePrivate(DescribeSubscriptionResponse * const q);

    void parseDescribeSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubscriptionResponse)
    Q_DISABLE_COPY(DescribeSubscriptionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
