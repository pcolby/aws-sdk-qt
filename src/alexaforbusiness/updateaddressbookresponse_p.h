// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDRESSBOOKRESPONSE_P_H
#define QTAWS_UPDATEADDRESSBOOKRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateAddressBookResponse;

class UpdateAddressBookResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateAddressBookResponsePrivate(UpdateAddressBookResponse * const q);

    void parseUpdateAddressBookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAddressBookResponse)
    Q_DISABLE_COPY(UpdateAddressBookResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
