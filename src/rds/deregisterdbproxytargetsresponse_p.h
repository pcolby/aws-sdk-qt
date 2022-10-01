// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDBPROXYTARGETSRESPONSE_P_H
#define QTAWS_DEREGISTERDBPROXYTARGETSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeregisterDBProxyTargetsResponse;

class DeregisterDBProxyTargetsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeregisterDBProxyTargetsResponsePrivate(DeregisterDBProxyTargetsResponse * const q);

    void parseDeregisterDBProxyTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterDBProxyTargetsResponse)
    Q_DISABLE_COPY(DeregisterDBProxyTargetsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
