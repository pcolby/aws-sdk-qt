// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTRESPONSE_P_H
#define QTAWS_LISTPERMISSIONSETSPROVISIONEDTOACCOUNTRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsProvisionedToAccountResponse;

class ListPermissionSetsProvisionedToAccountResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListPermissionSetsProvisionedToAccountResponsePrivate(ListPermissionSetsProvisionedToAccountResponse * const q);

    void parseListPermissionSetsProvisionedToAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionSetsProvisionedToAccountResponse)
    Q_DISABLE_COPY(ListPermissionSetsProvisionedToAccountResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
