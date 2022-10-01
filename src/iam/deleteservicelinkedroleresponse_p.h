// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICELINKEDROLERESPONSE_P_H
#define QTAWS_DELETESERVICELINKEDROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteServiceLinkedRoleResponse;

class DeleteServiceLinkedRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteServiceLinkedRoleResponsePrivate(DeleteServiceLinkedRoleResponse * const q);

    void parseDeleteServiceLinkedRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceLinkedRoleResponse)
    Q_DISABLE_COPY(DeleteServiceLinkedRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
