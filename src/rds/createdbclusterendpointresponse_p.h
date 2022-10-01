// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERENDPOINTRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERENDPOINTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBClusterEndpointResponse;

class CreateDBClusterEndpointResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBClusterEndpointResponsePrivate(CreateDBClusterEndpointResponse * const q);

    void parseCreateDBClusterEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterEndpointResponse)
    Q_DISABLE_COPY(CreateDBClusterEndpointResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
