// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMAILBOXPERMISSIONSRESPONSE_H
#define QTAWS_PUTMAILBOXPERMISSIONSRESPONSE_H

#include "workmailresponse.h"
#include "putmailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class PutMailboxPermissionsResponsePrivate;

class QTAWSWORKMAIL_EXPORT PutMailboxPermissionsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    PutMailboxPermissionsResponse(const PutMailboxPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMailboxPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMailboxPermissionsResponse)
    Q_DISABLE_COPY(PutMailboxPermissionsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
