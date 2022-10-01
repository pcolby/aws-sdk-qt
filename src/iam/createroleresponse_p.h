// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLERESPONSE_P_H
#define QTAWS_CREATEROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateRoleResponse;

class CreateRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateRoleResponsePrivate(CreateRoleResponse * const q);

    void parseCreateRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRoleResponse)
    Q_DISABLE_COPY(CreateRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
