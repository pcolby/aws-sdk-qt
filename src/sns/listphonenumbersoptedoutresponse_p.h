// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSOPTEDOUTRESPONSE_P_H
#define QTAWS_LISTPHONENUMBERSOPTEDOUTRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListPhoneNumbersOptedOutResponse;

class ListPhoneNumbersOptedOutResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListPhoneNumbersOptedOutResponsePrivate(ListPhoneNumbersOptedOutResponse * const q);

    void parseListPhoneNumbersOptedOutResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumbersOptedOutResponse)
    Q_DISABLE_COPY(ListPhoneNumbersOptedOutResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
