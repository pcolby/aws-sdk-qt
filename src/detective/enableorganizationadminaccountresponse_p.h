// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class EnableOrganizationAdminAccountResponse;

class EnableOrganizationAdminAccountResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit EnableOrganizationAdminAccountResponsePrivate(EnableOrganizationAdminAccountResponse * const q);

    void parseEnableOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(EnableOrganizationAdminAccountResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
