// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYGROUPRESPONSE_P_H
#define QTAWS_CREATESECURITYGROUPRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateSecurityGroupResponse;

class CreateSecurityGroupResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateSecurityGroupResponsePrivate(CreateSecurityGroupResponse * const q);

    void parseCreateSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSecurityGroupResponse)
    Q_DISABLE_COPY(CreateSecurityGroupResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
