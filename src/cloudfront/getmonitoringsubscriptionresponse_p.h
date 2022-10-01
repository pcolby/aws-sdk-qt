// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMONITORINGSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_GETMONITORINGSUBSCRIPTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetMonitoringSubscriptionResponse;

class GetMonitoringSubscriptionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetMonitoringSubscriptionResponsePrivate(GetMonitoringSubscriptionResponse * const q);

    void parseGetMonitoringSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMonitoringSubscriptionResponse)
    Q_DISABLE_COPY(GetMonitoringSubscriptionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
