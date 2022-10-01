// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENATGATEWAYRESPONSE_P_H
#define QTAWS_DELETENATGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNatGatewayResponse;

class DeleteNatGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNatGatewayResponsePrivate(DeleteNatGatewayResponse * const q);

    void parseDeleteNatGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNatGatewayResponse)
    Q_DISABLE_COPY(DeleteNatGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
