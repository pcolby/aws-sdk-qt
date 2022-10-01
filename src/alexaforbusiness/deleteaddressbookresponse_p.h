// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADDRESSBOOKRESPONSE_P_H
#define QTAWS_DELETEADDRESSBOOKRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteAddressBookResponse;

class DeleteAddressBookResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteAddressBookResponsePrivate(DeleteAddressBookResponse * const q);

    void parseDeleteAddressBookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAddressBookResponse)
    Q_DISABLE_COPY(DeleteAddressBookResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
