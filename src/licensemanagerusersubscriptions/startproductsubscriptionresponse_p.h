// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPRODUCTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_STARTPRODUCTSUBSCRIPTIONRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StartProductSubscriptionResponse;

class StartProductSubscriptionResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit StartProductSubscriptionResponsePrivate(StartProductSubscriptionResponse * const q);

    void parseStartProductSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartProductSubscriptionResponse)
    Q_DISABLE_COPY(StartProductSubscriptionResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
