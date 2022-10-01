// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSRESPONSE_H
#define QTAWS_LISTPERMISSIONSETSRESPONSE_H

#include "ssoadminresponse.h"
#include "listpermissionsetsrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsResponsePrivate;

class QTAWSSSOADMIN_EXPORT ListPermissionSetsResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    ListPermissionSetsResponse(const ListPermissionSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPermissionSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionSetsResponse)
    Q_DISABLE_COPY(ListPermissionSetsResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
