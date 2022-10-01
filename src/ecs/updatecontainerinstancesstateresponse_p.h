// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERINSTANCESSTATERESPONSE_P_H
#define QTAWS_UPDATECONTAINERINSTANCESSTATERESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateContainerInstancesStateResponse;

class UpdateContainerInstancesStateResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateContainerInstancesStateResponsePrivate(UpdateContainerInstancesStateResponse * const q);

    void parseUpdateContainerInstancesStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContainerInstancesStateResponse)
    Q_DISABLE_COPY(UpdateContainerInstancesStateResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
