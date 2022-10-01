// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_DISABLEORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DisableOrganizationAdminAccountResponse;

class DisableOrganizationAdminAccountResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DisableOrganizationAdminAccountResponsePrivate(DisableOrganizationAdminAccountResponse * const q);

    void parseDisableOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(DisableOrganizationAdminAccountResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
