// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEACCOUNTTOORGANIZATIONRESPONSE_P_H
#define QTAWS_INVITEACCOUNTTOORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class InviteAccountToOrganizationResponse;

class InviteAccountToOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit InviteAccountToOrganizationResponsePrivate(InviteAccountToOrganizationResponse * const q);

    void parseInviteAccountToOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InviteAccountToOrganizationResponse)
    Q_DISABLE_COPY(InviteAccountToOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
