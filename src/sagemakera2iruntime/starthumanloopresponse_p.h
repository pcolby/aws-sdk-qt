// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTHUMANLOOPRESPONSE_P_H
#define QTAWS_STARTHUMANLOOPRESPONSE_P_H

#include "sagemakera2iruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class StartHumanLoopResponse;

class StartHumanLoopResponsePrivate : public SageMakerA2IRuntimeResponsePrivate {

public:

    explicit StartHumanLoopResponsePrivate(StartHumanLoopResponse * const q);

    void parseStartHumanLoopResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartHumanLoopResponse)
    Q_DISABLE_COPY(StartHumanLoopResponsePrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
