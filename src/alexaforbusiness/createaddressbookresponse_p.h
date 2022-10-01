// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSBOOKRESPONSE_P_H
#define QTAWS_CREATEADDRESSBOOKRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateAddressBookResponse;

class CreateAddressBookResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateAddressBookResponsePrivate(CreateAddressBookResponse * const q);

    void parseCreateAddressBookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAddressBookResponse)
    Q_DISABLE_COPY(CreateAddressBookResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
