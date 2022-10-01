// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNTASKRESPONSE_P_H
#define QTAWS_RUNTASKRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class RunTaskResponse;

class RunTaskResponsePrivate : public EcsResponsePrivate {

public:

    explicit RunTaskResponsePrivate(RunTaskResponse * const q);

    void parseRunTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunTaskResponse)
    Q_DISABLE_COPY(RunTaskResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
