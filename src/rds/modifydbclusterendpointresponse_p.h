// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERENDPOINTRESPONSE_P_H
#define QTAWS_MODIFYDBCLUSTERENDPOINTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterEndpointResponse;

class ModifyDBClusterEndpointResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBClusterEndpointResponsePrivate(ModifyDBClusterEndpointResponse * const q);

    void parseModifyDBClusterEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterEndpointResponse)
    Q_DISABLE_COPY(ModifyDBClusterEndpointResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
