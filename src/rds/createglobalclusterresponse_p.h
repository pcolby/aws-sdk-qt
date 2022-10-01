// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_CREATEGLOBALCLUSTERRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateGlobalClusterResponse;

class CreateGlobalClusterResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateGlobalClusterResponsePrivate(CreateGlobalClusterResponse * const q);

    void parseCreateGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGlobalClusterResponse)
    Q_DISABLE_COPY(CreateGlobalClusterResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
