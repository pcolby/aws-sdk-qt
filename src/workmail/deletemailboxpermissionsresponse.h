// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAILBOXPERMISSIONSRESPONSE_H
#define QTAWS_DELETEMAILBOXPERMISSIONSRESPONSE_H

#include "workmailresponse.h"
#include "deletemailboxpermissionsrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMailboxPermissionsResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteMailboxPermissionsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteMailboxPermissionsResponse(const DeleteMailboxPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMailboxPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMailboxPermissionsResponse)
    Q_DISABLE_COPY(DeleteMailboxPermissionsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
