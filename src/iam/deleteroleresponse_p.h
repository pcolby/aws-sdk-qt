// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLERESPONSE_P_H
#define QTAWS_DELETEROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteRoleResponse;

class DeleteRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteRoleResponsePrivate(DeleteRoleResponse * const q);

    void parseDeleteRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRoleResponse)
    Q_DISABLE_COPY(DeleteRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
