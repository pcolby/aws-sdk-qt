// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTASKRESPONSE_P_H
#define QTAWS_STOPTASKRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class StopTaskResponse;

class StopTaskResponsePrivate : public EcsResponsePrivate {

public:

    explicit StopTaskResponsePrivate(StopTaskResponse * const q);

    void parseStopTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTaskResponse)
    Q_DISABLE_COPY(StopTaskResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
