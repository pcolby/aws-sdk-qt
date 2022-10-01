// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKRESPONSE_P_H
#define QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateContactWithAddressBookResponse;

class AssociateContactWithAddressBookResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit AssociateContactWithAddressBookResponsePrivate(AssociateContactWithAddressBookResponse * const q);

    void parseAssociateContactWithAddressBookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateContactWithAddressBookResponse)
    Q_DISABLE_COPY(AssociateContactWithAddressBookResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
