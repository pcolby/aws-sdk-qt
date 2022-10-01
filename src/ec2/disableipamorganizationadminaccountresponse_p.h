// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_DISABLEIPAMORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisableIpamOrganizationAdminAccountResponse;

class DisableIpamOrganizationAdminAccountResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisableIpamOrganizationAdminAccountResponsePrivate(DisableIpamOrganizationAdminAccountResponse * const q);

    void parseDisableIpamOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableIpamOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(DisableIpamOrganizationAdminAccountResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
