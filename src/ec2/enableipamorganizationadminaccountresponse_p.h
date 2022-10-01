// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIPAMORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_ENABLEIPAMORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class EnableIpamOrganizationAdminAccountResponse;

class EnableIpamOrganizationAdminAccountResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit EnableIpamOrganizationAdminAccountResponsePrivate(EnableIpamOrganizationAdminAccountResponse * const q);

    void parseEnableIpamOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableIpamOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(EnableIpamOrganizationAdminAccountResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
