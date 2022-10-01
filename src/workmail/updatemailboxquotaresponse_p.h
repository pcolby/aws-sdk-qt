// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAILBOXQUOTARESPONSE_P_H
#define QTAWS_UPDATEMAILBOXQUOTARESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class UpdateMailboxQuotaResponse;

class UpdateMailboxQuotaResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit UpdateMailboxQuotaResponsePrivate(UpdateMailboxQuotaResponse * const q);

    void parseUpdateMailboxQuotaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMailboxQuotaResponse)
    Q_DISABLE_COPY(UpdateMailboxQuotaResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
