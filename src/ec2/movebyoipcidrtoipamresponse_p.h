// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEBYOIPCIDRTOIPAMRESPONSE_P_H
#define QTAWS_MOVEBYOIPCIDRTOIPAMRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class MoveByoipCidrToIpamResponse;

class MoveByoipCidrToIpamResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit MoveByoipCidrToIpamResponsePrivate(MoveByoipCidrToIpamResponse * const q);

    void parseMoveByoipCidrToIpamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MoveByoipCidrToIpamResponse)
    Q_DISABLE_COPY(MoveByoipCidrToIpamResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
