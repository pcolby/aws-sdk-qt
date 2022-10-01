// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILBOXDETAILSRESPONSE_P_H
#define QTAWS_GETMAILBOXDETAILSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class GetMailboxDetailsResponse;

class GetMailboxDetailsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit GetMailboxDetailsResponsePrivate(GetMailboxDetailsResponse * const q);

    void parseGetMailboxDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMailboxDetailsResponse)
    Q_DISABLE_COPY(GetMailboxDetailsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
