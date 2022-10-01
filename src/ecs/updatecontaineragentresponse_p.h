// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERAGENTRESPONSE_P_H
#define QTAWS_UPDATECONTAINERAGENTRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateContainerAgentResponse;

class UpdateContainerAgentResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateContainerAgentResponsePrivate(UpdateContainerAgentResponse * const q);

    void parseUpdateContainerAgentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContainerAgentResponse)
    Q_DISABLE_COPY(UpdateContainerAgentResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
