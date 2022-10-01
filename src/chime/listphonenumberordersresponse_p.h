// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERORDERSRESPONSE_P_H
#define QTAWS_LISTPHONENUMBERORDERSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListPhoneNumberOrdersResponse;

class ListPhoneNumberOrdersResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListPhoneNumberOrdersResponsePrivate(ListPhoneNumberOrdersResponse * const q);

    void parseListPhoneNumberOrdersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPhoneNumberOrdersResponse)
    Q_DISABLE_COPY(ListPhoneNumberOrdersResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
