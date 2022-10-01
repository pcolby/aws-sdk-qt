// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERPOLLENDPOINTRESPONSE_P_H
#define QTAWS_DISCOVERPOLLENDPOINTRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DiscoverPollEndpointResponse;

class DiscoverPollEndpointResponsePrivate : public EcsResponsePrivate {

public:

    explicit DiscoverPollEndpointResponsePrivate(DiscoverPollEndpointResponse * const q);

    void parseDiscoverPollEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DiscoverPollEndpointResponse)
    Q_DISABLE_COPY(DiscoverPollEndpointResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
