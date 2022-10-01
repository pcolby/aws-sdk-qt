// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILDOMAINRESPONSE_P_H
#define QTAWS_GETMAILDOMAINRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class GetMailDomainResponse;

class GetMailDomainResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit GetMailDomainResponsePrivate(GetMailDomainResponse * const q);

    void parseGetMailDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMailDomainResponse)
    Q_DISABLE_COPY(GetMailDomainResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
