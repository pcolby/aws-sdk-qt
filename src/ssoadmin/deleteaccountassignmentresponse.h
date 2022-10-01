// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTASSIGNMENTRESPONSE_H
#define QTAWS_DELETEACCOUNTASSIGNMENTRESPONSE_H

#include "ssoadminresponse.h"
#include "deleteaccountassignmentrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteAccountAssignmentResponsePrivate;

class QTAWSSSOADMIN_EXPORT DeleteAccountAssignmentResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DeleteAccountAssignmentResponse(const DeleteAccountAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAssignmentResponse)
    Q_DISABLE_COPY(DeleteAccountAssignmentResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
