// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPERMISSIONSBOUNDARYRESPONSE_P_H
#define QTAWS_PUTROLEPERMISSIONSBOUNDARYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class PutRolePermissionsBoundaryResponse;

class PutRolePermissionsBoundaryResponsePrivate : public IamResponsePrivate {

public:

    explicit PutRolePermissionsBoundaryResponsePrivate(PutRolePermissionsBoundaryResponse * const q);

    void parsePutRolePermissionsBoundaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRolePermissionsBoundaryResponse)
    Q_DISABLE_COPY(PutRolePermissionsBoundaryResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
