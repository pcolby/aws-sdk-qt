// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYRESPONSE_P_H
#define QTAWS_MODIFYDBPROXYRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyResponse;

class ModifyDBProxyResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBProxyResponsePrivate(ModifyDBProxyResponse * const q);

    void parseModifyDBProxyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBProxyResponse)
    Q_DISABLE_COPY(ModifyDBProxyResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
