// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERINSTANCESRESPONSE_P_H
#define QTAWS_LISTCONTAINERINSTANCESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListContainerInstancesResponse;

class ListContainerInstancesResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListContainerInstancesResponsePrivate(ListContainerInstancesResponse * const q);

    void parseListContainerInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContainerInstancesResponse)
    Q_DISABLE_COPY(ListContainerInstancesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
