// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLUSTERCAPACITYPROVIDERSRESPONSE_P_H
#define QTAWS_PUTCLUSTERCAPACITYPROVIDERSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class PutClusterCapacityProvidersResponse;

class PutClusterCapacityProvidersResponsePrivate : public EcsResponsePrivate {

public:

    explicit PutClusterCapacityProvidersResponsePrivate(PutClusterCapacityProvidersResponse * const q);

    void parsePutClusterCapacityProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutClusterCapacityProvidersResponse)
    Q_DISABLE_COPY(PutClusterCapacityProvidersResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
