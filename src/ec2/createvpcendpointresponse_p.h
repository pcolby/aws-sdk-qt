// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTRESPONSE_P_H
#define QTAWS_CREATEVPCENDPOINTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointResponse;

class CreateVpcEndpointResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpcEndpointResponsePrivate(CreateVpcEndpointResponse * const q);

    void parseCreateVpcEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcEndpointResponse)
    Q_DISABLE_COPY(CreateVpcEndpointResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
