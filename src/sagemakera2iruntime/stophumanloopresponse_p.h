// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHUMANLOOPRESPONSE_P_H
#define QTAWS_STOPHUMANLOOPRESPONSE_P_H

#include "sagemakera2iruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StopHumanLoopResponse;

class StopHumanLoopResponsePrivate : public SageMakerA2IRuntimeResponsePrivate {

public:

    explicit StopHumanLoopResponsePrivate(StopHumanLoopResponse * const q);

    void parseStopHumanLoopResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopHumanLoopResponse)
    Q_DISABLE_COPY(StopHumanLoopResponsePrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
