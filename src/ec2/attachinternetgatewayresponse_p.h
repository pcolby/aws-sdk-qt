// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINTERNETGATEWAYRESPONSE_P_H
#define QTAWS_ATTACHINTERNETGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AttachInternetGatewayResponse;

class AttachInternetGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AttachInternetGatewayResponsePrivate(AttachInternetGatewayResponse * const q);

    void parseAttachInternetGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachInternetGatewayResponse)
    Q_DISABLE_COPY(AttachInternetGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
