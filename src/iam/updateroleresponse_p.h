// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLERESPONSE_P_H
#define QTAWS_UPDATEROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateRoleResponse;

class UpdateRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateRoleResponsePrivate(UpdateRoleResponse * const q);

    void parseUpdateRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoleResponse)
    Q_DISABLE_COPY(UpdateRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
