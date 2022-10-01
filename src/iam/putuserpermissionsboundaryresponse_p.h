// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERPERMISSIONSBOUNDARYRESPONSE_P_H
#define QTAWS_PUTUSERPERMISSIONSBOUNDARYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class PutUserPermissionsBoundaryResponse;

class PutUserPermissionsBoundaryResponsePrivate : public IamResponsePrivate {

public:

    explicit PutUserPermissionsBoundaryResponsePrivate(PutUserPermissionsBoundaryResponse * const q);

    void parsePutUserPermissionsBoundaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutUserPermissionsBoundaryResponse)
    Q_DISABLE_COPY(PutUserPermissionsBoundaryResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
