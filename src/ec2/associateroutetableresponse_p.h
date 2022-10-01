// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROUTETABLERESPONSE_P_H
#define QTAWS_ASSOCIATEROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateRouteTableResponse;

class AssociateRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateRouteTableResponsePrivate(AssociateRouteTableResponse * const q);

    void parseAssociateRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateRouteTableResponse)
    Q_DISABLE_COPY(AssociateRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
