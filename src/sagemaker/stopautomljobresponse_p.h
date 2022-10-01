// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMLJOBRESPONSE_P_H
#define QTAWS_STOPAUTOMLJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopAutoMLJobResponse;

class StopAutoMLJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopAutoMLJobResponsePrivate(StopAutoMLJobResponse * const q);

    void parseStopAutoMLJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopAutoMLJobResponse)
    Q_DISABLE_COPY(StopAutoMLJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
