// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERRESPONSE_H
#define QTAWS_ASSOCIATEUSERRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "associateuserrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class AssociateUserResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT AssociateUserResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    AssociateUserResponse(const AssociateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateUserResponse)
    Q_DISABLE_COPY(AssociateUserResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
