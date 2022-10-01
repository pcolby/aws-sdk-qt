// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKEXECUTIONRESPONSE_P_H
#define QTAWS_STARTNOTEBOOKEXECUTIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class StartNotebookExecutionResponse;

class StartNotebookExecutionResponsePrivate : public EmrResponsePrivate {

public:

    explicit StartNotebookExecutionResponsePrivate(StartNotebookExecutionResponse * const q);

    void parseStartNotebookExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartNotebookExecutionResponse)
    Q_DISABLE_COPY(StartNotebookExecutionResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
