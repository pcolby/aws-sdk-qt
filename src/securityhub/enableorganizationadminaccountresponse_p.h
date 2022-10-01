// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class EnableOrganizationAdminAccountResponse;

class EnableOrganizationAdminAccountResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit EnableOrganizationAdminAccountResponsePrivate(EnableOrganizationAdminAccountResponse * const q);

    void parseEnableOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(EnableOrganizationAdminAccountResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
