// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPERMISSIONSBOUNDARYRESPONSE_P_H
#define QTAWS_DELETEUSERPERMISSIONSBOUNDARYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteUserPermissionsBoundaryResponse;

class DeleteUserPermissionsBoundaryResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteUserPermissionsBoundaryResponsePrivate(DeleteUserPermissionsBoundaryResponse * const q);

    void parseDeleteUserPermissionsBoundaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserPermissionsBoundaryResponse)
    Q_DISABLE_COPY(DeleteUserPermissionsBoundaryResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
