// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSE_P_H
#define QTAWS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedServicesForAccountResponse;

class ListDelegatedServicesForAccountResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListDelegatedServicesForAccountResponsePrivate(ListDelegatedServicesForAccountResponse * const q);

    void parseListDelegatedServicesForAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDelegatedServicesForAccountResponse)
    Q_DISABLE_COPY(ListDelegatedServicesForAccountResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
