// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKSETRESPONSE_P_H
#define QTAWS_UPDATETASKSETRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateTaskSetResponse;

class UpdateTaskSetResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateTaskSetResponsePrivate(UpdateTaskSetResponse * const q);

    void parseUpdateTaskSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTaskSetResponse)
    Q_DISABLE_COPY(UpdateTaskSetResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
