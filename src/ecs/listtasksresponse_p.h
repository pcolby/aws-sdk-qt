// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKSRESPONSE_P_H
#define QTAWS_LISTTASKSRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class ListTasksResponse;

class ListTasksResponsePrivate : public EcsResponsePrivate {

public:

    explicit ListTasksResponsePrivate(ListTasksResponse * const q);

    void parseListTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTasksResponse)
    Q_DISABLE_COPY(ListTasksResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
