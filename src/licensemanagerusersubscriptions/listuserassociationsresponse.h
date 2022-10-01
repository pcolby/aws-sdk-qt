// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERASSOCIATIONSRESPONSE_H
#define QTAWS_LISTUSERASSOCIATIONSRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "listuserassociationsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListUserAssociationsResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT ListUserAssociationsResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    ListUserAssociationsResponse(const ListUserAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserAssociationsResponse)
    Q_DISABLE_COPY(ListUserAssociationsResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
