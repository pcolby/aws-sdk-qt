// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETCIDRBLOCKRESPONSE_P_H
#define QTAWS_DISASSOCIATESUBNETCIDRBLOCKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateSubnetCidrBlockResponse;

class DisassociateSubnetCidrBlockResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateSubnetCidrBlockResponsePrivate(DisassociateSubnetCidrBlockResponse * const q);

    void parseDisassociateSubnetCidrBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSubnetCidrBlockResponse)
    Q_DISABLE_COPY(DisassociateSubnetCidrBlockResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
