// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERRESPONSE_H
#define QTAWS_DISASSOCIATEUSERRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "disassociateuserrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DisassociateUserResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT DisassociateUserResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    DisassociateUserResponse(const DisassociateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateUserResponse)
    Q_DISABLE_COPY(DisassociateUserResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
