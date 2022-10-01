// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXECUTIONRESPONSE_P_H
#define QTAWS_STOPEXECUTIONRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class StopExecutionResponse;

class StopExecutionResponsePrivate : public SfnResponsePrivate {

public:

    explicit StopExecutionResponsePrivate(StopExecutionResponse * const q);

    void parseStopExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopExecutionResponse)
    Q_DISABLE_COPY(StopExecutionResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
