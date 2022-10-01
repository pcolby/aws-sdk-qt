// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERREQUEST_H
#define QTAWS_DISASSOCIATEUSERREQUEST_H

#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DisassociateUserRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT DisassociateUserRequest : public LicenseManagerUserSubscriptionsRequest {

public:
    DisassociateUserRequest(const DisassociateUserRequest &other);
    DisassociateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateUserRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
