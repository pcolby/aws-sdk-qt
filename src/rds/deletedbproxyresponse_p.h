// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYRESPONSE_P_H
#define QTAWS_DELETEDBPROXYRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyResponse;

class DeleteDBProxyResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBProxyResponsePrivate(DeleteDBProxyResponse * const q);

    void parseDeleteDBProxyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBProxyResponse)
    Q_DISABLE_COPY(DeleteDBProxyResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
