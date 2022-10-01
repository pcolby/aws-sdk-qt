// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPRODUCTSUBSCRIPTIONRESPONSE_H
#define QTAWS_STOPPRODUCTSUBSCRIPTIONRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "stopproductsubscriptionrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class StopProductSubscriptionResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT StopProductSubscriptionResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    StopProductSubscriptionResponse(const StopProductSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopProductSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopProductSubscriptionResponse)
    Q_DISABLE_COPY(StopProductSubscriptionResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
