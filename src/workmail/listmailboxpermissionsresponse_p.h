// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXPERMISSIONSRESPONSE_P_H
#define QTAWS_LISTMAILBOXPERMISSIONSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxPermissionsResponse;

class ListMailboxPermissionsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListMailboxPermissionsResponsePrivate(ListMailboxPermissionsResponse * const q);

    void parseListMailboxPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMailboxPermissionsResponse)
    Q_DISABLE_COPY(ListMailboxPermissionsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
