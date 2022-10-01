// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSECURITYGROUPRESPONSE_P_H
#define QTAWS_CREATEDBSECURITYGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBSecurityGroupResponse;

class CreateDBSecurityGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBSecurityGroupResponsePrivate(CreateDBSecurityGroupResponse * const q);

    void parseCreateDBSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBSecurityGroupResponse)
    Q_DISABLE_COPY(CreateDBSecurityGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
