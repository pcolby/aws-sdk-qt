// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINLINEPOLICYFORPERMISSIONSETRESPONSE_H
#define QTAWS_GETINLINEPOLICYFORPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "getinlinepolicyforpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class GetInlinePolicyForPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT GetInlinePolicyForPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    GetInlinePolicyForPermissionSetResponse(const GetInlinePolicyForPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInlinePolicyForPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInlinePolicyForPermissionSetResponse)
    Q_DISABLE_COPY(GetInlinePolicyForPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
