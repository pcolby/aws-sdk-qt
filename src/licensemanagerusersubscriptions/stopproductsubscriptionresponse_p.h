// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPRODUCTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_STOPPRODUCTSUBSCRIPTIONRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StopProductSubscriptionResponse;

class StopProductSubscriptionResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit StopProductSubscriptionResponsePrivate(StopProductSubscriptionResponse * const q);

    void parseStopProductSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopProductSubscriptionResponse)
    Q_DISABLE_COPY(StopProductSubscriptionResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
