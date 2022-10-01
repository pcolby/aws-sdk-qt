// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATEMONITORINGSUBSCRIPTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateMonitoringSubscriptionResponse;

class CreateMonitoringSubscriptionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateMonitoringSubscriptionResponsePrivate(CreateMonitoringSubscriptionResponse * const q);

    void parseCreateMonitoringSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMonitoringSubscriptionResponse)
    Q_DISABLE_COPY(CreateMonitoringSubscriptionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
