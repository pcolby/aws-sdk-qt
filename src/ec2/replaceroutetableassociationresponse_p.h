// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTETABLEASSOCIATIONRESPONSE_P_H
#define QTAWS_REPLACEROUTETABLEASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteTableAssociationResponse;

class ReplaceRouteTableAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReplaceRouteTableAssociationResponsePrivate(ReplaceRouteTableAssociationResponse * const q);

    void parseReplaceRouteTableAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceRouteTableAssociationResponse)
    Q_DISABLE_COPY(ReplaceRouteTableAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
