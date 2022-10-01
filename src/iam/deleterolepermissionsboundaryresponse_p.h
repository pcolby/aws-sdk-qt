// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPERMISSIONSBOUNDARYRESPONSE_P_H
#define QTAWS_DELETEROLEPERMISSIONSBOUNDARYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteRolePermissionsBoundaryResponse;

class DeleteRolePermissionsBoundaryResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteRolePermissionsBoundaryResponsePrivate(DeleteRolePermissionsBoundaryResponse * const q);

    void parseDeleteRolePermissionsBoundaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRolePermissionsBoundaryResponse)
    Q_DISABLE_COPY(DeleteRolePermissionsBoundaryResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
