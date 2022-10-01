// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEACCOUNTFROMORGANIZATIONRESPONSE_P_H
#define QTAWS_REMOVEACCOUNTFROMORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class RemoveAccountFromOrganizationResponse;

class RemoveAccountFromOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit RemoveAccountFromOrganizationResponsePrivate(RemoveAccountFromOrganizationResponse * const q);

    void parseRemoveAccountFromOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAccountFromOrganizationResponse)
    Q_DISABLE_COPY(RemoveAccountFromOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
