// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPRODUCTSUBSCRIPTIONRESPONSE_H
#define QTAWS_STARTPRODUCTSUBSCRIPTIONRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "startproductsubscriptionrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StartProductSubscriptionResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT StartProductSubscriptionResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    StartProductSubscriptionResponse(const StartProductSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartProductSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartProductSubscriptionResponse)
    Q_DISABLE_COPY(StartProductSubscriptionResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
