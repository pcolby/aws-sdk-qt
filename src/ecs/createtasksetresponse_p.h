// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKSETRESPONSE_P_H
#define QTAWS_CREATETASKSETRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class CreateTaskSetResponse;

class CreateTaskSetResponsePrivate : public EcsResponsePrivate {

public:

    explicit CreateTaskSetResponsePrivate(CreateTaskSetResponse * const q);

    void parseCreateTaskSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTaskSetResponse)
    Q_DISABLE_COPY(CreateTaskSetResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
