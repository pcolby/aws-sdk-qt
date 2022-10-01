// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHLOCALGATEWAYROUTESRESPONSE_P_H
#define QTAWS_SEARCHLOCALGATEWAYROUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class SearchLocalGatewayRoutesResponse;

class SearchLocalGatewayRoutesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit SearchLocalGatewayRoutesResponsePrivate(SearchLocalGatewayRoutesResponse * const q);

    void parseSearchLocalGatewayRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchLocalGatewayRoutesResponse)
    Q_DISABLE_COPY(SearchLocalGatewayRoutesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
