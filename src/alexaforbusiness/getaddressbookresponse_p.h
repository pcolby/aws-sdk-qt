// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADDRESSBOOKRESPONSE_P_H
#define QTAWS_GETADDRESSBOOKRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetAddressBookResponse;

class GetAddressBookResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetAddressBookResponsePrivate(GetAddressBookResponse * const q);

    void parseGetAddressBookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAddressBookResponse)
    Q_DISABLE_COPY(GetAddressBookResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
