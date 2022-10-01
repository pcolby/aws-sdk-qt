// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNOTEBOOKINSTANCERESPONSE_P_H
#define QTAWS_STARTNOTEBOOKINSTANCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StartNotebookInstanceResponse;

class StartNotebookInstanceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StartNotebookInstanceResponsePrivate(StartNotebookInstanceResponse * const q);

    void parseStartNotebookInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartNotebookInstanceResponse)
    Q_DISABLE_COPY(StartNotebookInstanceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
