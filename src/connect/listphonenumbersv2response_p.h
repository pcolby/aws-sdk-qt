// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSV2RESPONSE_P_H
#define QTAWS_LISTPHONENUMBERSV2RESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersV2Response;

class ListPhoneNumbersV2ResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListPhoneNumbersV2ResponsePrivate(ListPhoneNumbersV2Response * const q);

    void parseListPhoneNumbersV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersV2Response)
    Q_DISABLE_COPY(ListPhoneNumbersV2ResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
