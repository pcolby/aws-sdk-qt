// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERRESPONSE_P_H
#define QTAWS_ASSOCIATEUSERRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class AssociateUserResponse;

class AssociateUserResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit AssociateUserResponsePrivate(AssociateUserResponse * const q);

    void parseAssociateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateUserResponse)
    Q_DISABLE_COPY(AssociateUserResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
