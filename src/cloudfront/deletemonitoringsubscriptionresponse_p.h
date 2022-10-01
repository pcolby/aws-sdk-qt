// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETEMONITORINGSUBSCRIPTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteMonitoringSubscriptionResponse;

class DeleteMonitoringSubscriptionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteMonitoringSubscriptionResponsePrivate(DeleteMonitoringSubscriptionResponse * const q);

    void parseDeleteMonitoringSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMonitoringSubscriptionResponse)
    Q_DISABLE_COPY(DeleteMonitoringSubscriptionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
