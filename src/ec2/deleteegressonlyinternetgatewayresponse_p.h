// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEGRESSONLYINTERNETGATEWAYRESPONSE_P_H
#define QTAWS_DELETEEGRESSONLYINTERNETGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteEgressOnlyInternetGatewayResponse;

class DeleteEgressOnlyInternetGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteEgressOnlyInternetGatewayResponsePrivate(DeleteEgressOnlyInternetGatewayResponse * const q);

    void parseDeleteEgressOnlyInternetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEgressOnlyInternetGatewayResponse)
    Q_DISABLE_COPY(DeleteEgressOnlyInternetGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
