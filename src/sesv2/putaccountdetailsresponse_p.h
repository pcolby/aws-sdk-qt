// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDETAILSRESPONSE_P_H
#define QTAWS_PUTACCOUNTDETAILSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDetailsResponse;

class PutAccountDetailsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutAccountDetailsResponsePrivate(PutAccountDetailsResponse * const q);

    void parsePutAccountDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountDetailsResponse)
    Q_DISABLE_COPY(PutAccountDetailsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
