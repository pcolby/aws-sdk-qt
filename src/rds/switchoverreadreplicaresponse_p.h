// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWITCHOVERREADREPLICARESPONSE_P_H
#define QTAWS_SWITCHOVERREADREPLICARESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class SwitchoverReadReplicaResponse;

class SwitchoverReadReplicaResponsePrivate : public RdsResponsePrivate {

public:

    explicit SwitchoverReadReplicaResponsePrivate(SwitchoverReadReplicaResponse * const q);

    void parseSwitchoverReadReplicaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SwitchoverReadReplicaResponse)
    Q_DISABLE_COPY(SwitchoverReadReplicaResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
