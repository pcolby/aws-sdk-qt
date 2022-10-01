// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERRESPONSE_P_H
#define QTAWS_MODIFYDBCLUSTERRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterResponse;

class ModifyDBClusterResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBClusterResponsePrivate(ModifyDBClusterResponse * const q);

    void parseModifyDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterResponse)
    Q_DISABLE_COPY(ModifyDBClusterResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
