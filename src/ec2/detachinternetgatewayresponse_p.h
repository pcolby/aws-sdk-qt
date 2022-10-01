// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINTERNETGATEWAYRESPONSE_P_H
#define QTAWS_DETACHINTERNETGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DetachInternetGatewayResponse;

class DetachInternetGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DetachInternetGatewayResponsePrivate(DetachInternetGatewayResponse * const q);

    void parseDetachInternetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachInternetGatewayResponse)
    Q_DISABLE_COPY(DetachInternetGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
