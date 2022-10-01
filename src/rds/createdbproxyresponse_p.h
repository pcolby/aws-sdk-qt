// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYRESPONSE_P_H
#define QTAWS_CREATEDBPROXYRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyResponse;

class CreateDBProxyResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBProxyResponsePrivate(CreateDBProxyResponse * const q);

    void parseCreateDBProxyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBProxyResponse)
    Q_DISABLE_COPY(CreateDBProxyResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
