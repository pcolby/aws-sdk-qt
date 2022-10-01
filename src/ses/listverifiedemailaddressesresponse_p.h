// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVERIFIEDEMAILADDRESSESRESPONSE_P_H
#define QTAWS_LISTVERIFIEDEMAILADDRESSESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListVerifiedEmailAddressesResponse;

class ListVerifiedEmailAddressesResponsePrivate : public SesResponsePrivate {

public:

    explicit ListVerifiedEmailAddressesResponsePrivate(ListVerifiedEmailAddressesResponse * const q);

    void parseListVerifiedEmailAddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVerifiedEmailAddressesResponse)
    Q_DISABLE_COPY(ListVerifiedEmailAddressesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
