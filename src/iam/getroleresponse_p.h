// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLERESPONSE_P_H
#define QTAWS_GETROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetRoleResponse;

class GetRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit GetRoleResponsePrivate(GetRoleResponse * const q);

    void parseGetRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRoleResponse)
    Q_DISABLE_COPY(GetRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
