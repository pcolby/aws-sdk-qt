// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONSETRESPONSE_H
#define QTAWS_CREATEPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "createpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreatePermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT CreatePermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    CreatePermissionSetResponse(const CreatePermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePermissionSetResponse)
    Q_DISABLE_COPY(CreatePermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
