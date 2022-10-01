// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKRESPONSE_P_H
#define QTAWS_STARTTASKRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class StartTaskResponse;

class StartTaskResponsePrivate : public EcsResponsePrivate {

public:

    explicit StartTaskResponsePrivate(StartTaskResponse * const q);

    void parseStartTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTaskResponse)
    Q_DISABLE_COPY(StartTaskResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
