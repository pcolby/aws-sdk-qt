// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCERESPONSE_P_H
#define QTAWS_UPDATENOTEBOOKINSTANCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceResponse;

class UpdateNotebookInstanceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateNotebookInstanceResponsePrivate(UpdateNotebookInstanceResponse * const q);

    void parseUpdateNotebookInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNotebookInstanceResponse)
    Q_DISABLE_COPY(UpdateNotebookInstanceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
