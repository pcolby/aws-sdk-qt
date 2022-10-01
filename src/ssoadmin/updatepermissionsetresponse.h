// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSETRESPONSE_H
#define QTAWS_UPDATEPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "updatepermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class UpdatePermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT UpdatePermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    UpdatePermissionSetResponse(const UpdatePermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePermissionSetResponse)
    Q_DISABLE_COPY(UpdatePermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
