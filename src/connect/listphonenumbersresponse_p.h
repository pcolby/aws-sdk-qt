// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSRESPONSE_P_H
#define QTAWS_LISTPHONENUMBERSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersResponse;

class ListPhoneNumbersResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListPhoneNumbersResponsePrivate(ListPhoneNumbersResponse * const q);

    void parseListPhoneNumbersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersResponse)
    Q_DISABLE_COPY(ListPhoneNumbersResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
