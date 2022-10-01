// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDROLERESPONSE_P_H
#define QTAWS_GETASSOCIATEDROLERESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetAssociatedRoleResponse;

class GetAssociatedRoleResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetAssociatedRoleResponsePrivate(GetAssociatedRoleResponse * const q);

    void parseGetAssociatedRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssociatedRoleResponse)
    Q_DISABLE_COPY(GetAssociatedRoleResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
