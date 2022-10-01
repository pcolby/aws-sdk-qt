// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKSETRESPONSE_P_H
#define QTAWS_DELETETASKSETRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DeleteTaskSetResponse;

class DeleteTaskSetResponsePrivate : public EcsResponsePrivate {

public:

    explicit DeleteTaskSetResponsePrivate(DeleteTaskSetResponse * const q);

    void parseDeleteTaskSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTaskSetResponse)
    Q_DISABLE_COPY(DeleteTaskSetResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
