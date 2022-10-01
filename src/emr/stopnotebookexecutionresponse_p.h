// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKEXECUTIONRESPONSE_P_H
#define QTAWS_STOPNOTEBOOKEXECUTIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class StopNotebookExecutionResponse;

class StopNotebookExecutionResponsePrivate : public EmrResponsePrivate {

public:

    explicit StopNotebookExecutionResponsePrivate(StopNotebookExecutionResponse * const q);

    void parseStopNotebookExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopNotebookExecutionResponse)
    Q_DISABLE_COPY(StopNotebookExecutionResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
