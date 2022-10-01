// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYRESPONSE_P_H
#define QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyCurrentDBClusterCapacityResponse;

class ModifyCurrentDBClusterCapacityResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyCurrentDBClusterCapacityResponsePrivate(ModifyCurrentDBClusterCapacityResponse * const q);

    void parseModifyCurrentDBClusterCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCurrentDBClusterCapacityResponse)
    Q_DISABLE_COPY(ModifyCurrentDBClusterCapacityResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
