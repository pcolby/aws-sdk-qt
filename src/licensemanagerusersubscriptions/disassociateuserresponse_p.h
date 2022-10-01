// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERRESPONSE_P_H
#define QTAWS_DISASSOCIATEUSERRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DisassociateUserResponse;

class DisassociateUserResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit DisassociateUserResponsePrivate(DisassociateUserResponse * const q);

    void parseDisassociateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateUserResponse)
    Q_DISABLE_COPY(DisassociateUserResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
