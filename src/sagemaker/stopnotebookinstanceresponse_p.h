// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPNOTEBOOKINSTANCERESPONSE_P_H
#define QTAWS_STOPNOTEBOOKINSTANCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopNotebookInstanceResponse;

class StopNotebookInstanceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopNotebookInstanceResponsePrivate(StopNotebookInstanceResponse * const q);

    void parseStopNotebookInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopNotebookInstanceResponse)
    Q_DISABLE_COPY(StopNotebookInstanceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
