// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETRESPONSE_H
#define QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "getpermissionsboundaryforpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class GetPermissionsBoundaryForPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT GetPermissionsBoundaryForPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    GetPermissionsBoundaryForPermissionSetResponse(const GetPermissionsBoundaryForPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPermissionsBoundaryForPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionsBoundaryForPermissionSetResponse)
    Q_DISABLE_COPY(GetPermissionsBoundaryForPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
