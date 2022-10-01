// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSETRESPONSE_H
#define QTAWS_DELETEPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "deletepermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT DeletePermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DeletePermissionSetResponse(const DeletePermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionSetResponse)
    Q_DISABLE_COPY(DeletePermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
