// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPERMISSIONSETRESPONSE_H
#define QTAWS_PROVISIONPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "provisionpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ProvisionPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT ProvisionPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ProvisionPermissionSetResponse(const ProvisionPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvisionPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionPermissionSetResponse)
    Q_DISABLE_COPY(ProvisionPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
