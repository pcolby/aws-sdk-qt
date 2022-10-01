// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILDOMAINSRESPONSE_P_H
#define QTAWS_LISTMAILDOMAINSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListMailDomainsResponse;

class ListMailDomainsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListMailDomainsResponsePrivate(ListMailDomainsResponse * const q);

    void parseListMailDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMailDomainsResponse)
    Q_DISABLE_COPY(ListMailDomainsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
