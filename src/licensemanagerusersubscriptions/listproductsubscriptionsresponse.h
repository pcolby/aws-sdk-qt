// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRODUCTSUBSCRIPTIONSRESPONSE_H
#define QTAWS_LISTPRODUCTSUBSCRIPTIONSRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "listproductsubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListProductSubscriptionsResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT ListProductSubscriptionsResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    ListProductSubscriptionsResponse(const ListProductSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProductSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProductSubscriptionsResponse)
    Q_DISABLE_COPY(ListProductSubscriptionsResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
