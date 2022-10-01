// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERRESPONSE_P_H
#define QTAWS_UPDATECLUSTERRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterResponse;

class UpdateClusterResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateClusterResponsePrivate(UpdateClusterResponse * const q);

    void parseUpdateClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterResponse)
    Q_DISABLE_COPY(UpdateClusterResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
