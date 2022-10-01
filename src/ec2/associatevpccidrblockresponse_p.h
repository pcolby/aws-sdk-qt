// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCCIDRBLOCKRESPONSE_P_H
#define QTAWS_ASSOCIATEVPCCIDRBLOCKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateVpcCidrBlockResponse;

class AssociateVpcCidrBlockResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateVpcCidrBlockResponsePrivate(AssociateVpcCidrBlockResponse * const q);

    void parseAssociateVpcCidrBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateVpcCidrBlockResponse)
    Q_DISABLE_COPY(AssociateVpcCidrBlockResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
