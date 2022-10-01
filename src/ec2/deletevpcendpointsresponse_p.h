// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTSRESPONSE_P_H
#define QTAWS_DELETEVPCENDPOINTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointsResponse;

class DeleteVpcEndpointsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpcEndpointsResponsePrivate(DeleteVpcEndpointsResponse * const q);

    void parseDeleteVpcEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcEndpointsResponse)
    Q_DISABLE_COPY(DeleteVpcEndpointsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
