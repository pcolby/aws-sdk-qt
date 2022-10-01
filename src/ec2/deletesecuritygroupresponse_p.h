// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYGROUPRESPONSE_P_H
#define QTAWS_DELETESECURITYGROUPRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteSecurityGroupResponse;

class DeleteSecurityGroupResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteSecurityGroupResponsePrivate(DeleteSecurityGroupResponse * const q);

    void parseDeleteSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteSecurityGroupResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
