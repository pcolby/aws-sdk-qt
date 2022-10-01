// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETRESPONSE_H
#define QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "deletepermissionsboundaryfrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionsBoundaryFromPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT DeletePermissionsBoundaryFromPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DeletePermissionsBoundaryFromPermissionSetResponse(const DeletePermissionsBoundaryFromPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePermissionsBoundaryFromPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionsBoundaryFromPermissionSetResponse)
    Q_DISABLE_COPY(DeletePermissionsBoundaryFromPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
