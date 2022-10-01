// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBCLUSTERRESPONSE_P_H
#define QTAWS_REBOOTDBCLUSTERRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class RebootDBClusterResponse;

class RebootDBClusterResponsePrivate : public RdsResponsePrivate {

public:

    explicit RebootDBClusterResponsePrivate(RebootDBClusterResponse * const q);

    void parseRebootDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootDBClusterResponse)
    Q_DISABLE_COPY(RebootDBClusterResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
