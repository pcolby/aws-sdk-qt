// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAILBOXPERMISSIONSRESPONSE_P_H
#define QTAWS_DELETEMAILBOXPERMISSIONSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteMailboxPermissionsResponse;

class DeleteMailboxPermissionsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteMailboxPermissionsResponsePrivate(DeleteMailboxPermissionsResponse * const q);

    void parseDeleteMailboxPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMailboxPermissionsResponse)
    Q_DISABLE_COPY(DeleteMailboxPermissionsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
