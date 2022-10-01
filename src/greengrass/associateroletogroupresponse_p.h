// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROLETOGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEROLETOGROUPRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class AssociateRoleToGroupResponse;

class AssociateRoleToGroupResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit AssociateRoleToGroupResponsePrivate(AssociateRoleToGroupResponse * const q);

    void parseAssociateRoleToGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateRoleToGroupResponse)
    Q_DISABLE_COPY(AssociateRoleToGroupResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
