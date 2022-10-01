// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXPERMISSIONSRESPONSE_H
#define QTAWS_LISTMAILBOXPERMISSIONSRESPONSE_H

#include "workmailresponse.h"
#include "listmailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxPermissionsResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListMailboxPermissionsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListMailboxPermissionsResponse(const ListMailboxPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMailboxPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMailboxPermissionsResponse)
    Q_DISABLE_COPY(ListMailboxPermissionsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
