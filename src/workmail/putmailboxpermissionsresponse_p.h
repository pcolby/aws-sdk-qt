// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAILBOXPERMISSIONSRESPONSE_P_H
#define QTAWS_PUTMAILBOXPERMISSIONSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class PutMailboxPermissionsResponse;

class PutMailboxPermissionsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit PutMailboxPermissionsResponsePrivate(PutMailboxPermissionsResponse * const q);

    void parsePutMailboxPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMailboxPermissionsResponse)
    Q_DISABLE_COPY(PutMailboxPermissionsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
