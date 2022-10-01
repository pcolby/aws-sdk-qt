// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTRESPONSE_H
#define QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTRESPONSE_H

#include "ssoadminresponse.h"
#include "listpermissionsetsprovisionedtoaccountrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsProvisionedToAccountResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListPermissionSetsProvisionedToAccountResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListPermissionSetsProvisionedToAccountResponse(const ListPermissionSetsProvisionedToAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionSetsProvisionedToAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionSetsProvisionedToAccountResponse)
    Q_DISABLE_COPY(ListPermissionSetsProvisionedToAccountResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
