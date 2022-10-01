// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHINGDESTINATIONRESPONSE_P_H
#define QTAWS_DESCRIBEPUBLISHINGDESTINATIONRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DescribePublishingDestinationResponse;

class DescribePublishingDestinationResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DescribePublishingDestinationResponsePrivate(DescribePublishingDestinationResponse * const q);

    void parseDescribePublishingDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePublishingDestinationResponse)
    Q_DISABLE_COPY(DescribePublishingDestinationResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
