// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETCIDRBLOCKRESPONSE_P_H
#define QTAWS_ASSOCIATESUBNETCIDRBLOCKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateSubnetCidrBlockResponse;

class AssociateSubnetCidrBlockResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateSubnetCidrBlockResponsePrivate(AssociateSubnetCidrBlockResponse * const q);

    void parseAssociateSubnetCidrBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSubnetCidrBlockResponse)
    Q_DISABLE_COPY(AssociateSubnetCidrBlockResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
