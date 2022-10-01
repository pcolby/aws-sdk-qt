// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROLEFROMGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEROLEFROMGROUPRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DisassociateRoleFromGroupResponse;

class DisassociateRoleFromGroupResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DisassociateRoleFromGroupResponsePrivate(DisassociateRoleFromGroupResponse * const q);

    void parseDisassociateRoleFromGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateRoleFromGroupResponse)
    Q_DISABLE_COPY(DisassociateRoleFromGroupResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
