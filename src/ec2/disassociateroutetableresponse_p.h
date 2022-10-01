// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTETABLERESPONSE_P_H
#define QTAWS_DISASSOCIATEROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateRouteTableResponse;

class DisassociateRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateRouteTableResponsePrivate(DisassociateRouteTableResponse * const q);

    void parseDisassociateRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateRouteTableResponse)
    Q_DISABLE_COPY(DisassociateRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
