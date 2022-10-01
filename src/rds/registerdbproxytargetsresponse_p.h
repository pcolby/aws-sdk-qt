// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDBPROXYTARGETSRESPONSE_P_H
#define QTAWS_REGISTERDBPROXYTARGETSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RegisterDBProxyTargetsResponse;

class RegisterDBProxyTargetsResponsePrivate : public RdsResponsePrivate {

public:

    explicit RegisterDBProxyTargetsResponsePrivate(RegisterDBProxyTargetsResponse * const q);

    void parseRegisterDBProxyTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterDBProxyTargetsResponse)
    Q_DISABLE_COPY(RegisterDBProxyTargetsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
