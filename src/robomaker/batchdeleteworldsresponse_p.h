// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEWORLDSRESPONSE_P_H
#define QTAWS_BATCHDELETEWORLDSRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class BatchDeleteWorldsResponse;

class BatchDeleteWorldsResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit BatchDeleteWorldsResponsePrivate(BatchDeleteWorldsResponse * const q);

    void parseBatchDeleteWorldsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteWorldsResponse)
    Q_DISABLE_COPY(BatchDeleteWorldsResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
