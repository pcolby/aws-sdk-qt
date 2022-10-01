// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETRESPONSE_H
#define QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "listmanagedpoliciesinpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListManagedPoliciesInPermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListManagedPoliciesInPermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListManagedPoliciesInPermissionSetResponse(const ListManagedPoliciesInPermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedPoliciesInPermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedPoliciesInPermissionSetResponse)
    Q_DISABLE_COPY(ListManagedPoliciesInPermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
