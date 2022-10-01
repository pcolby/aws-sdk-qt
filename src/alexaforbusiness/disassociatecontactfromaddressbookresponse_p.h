// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONTACTFROMADDRESSBOOKRESPONSE_P_H
#define QTAWS_DISASSOCIATECONTACTFROMADDRESSBOOKRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateContactFromAddressBookResponse;

class DisassociateContactFromAddressBookResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DisassociateContactFromAddressBookResponsePrivate(DisassociateContactFromAddressBookResponse * const q);

    void parseDisassociateContactFromAddressBookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateContactFromAddressBookResponse)
    Q_DISABLE_COPY(DisassociateContactFromAddressBookResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
