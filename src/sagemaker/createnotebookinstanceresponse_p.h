// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTEBOOKINSTANCERESPONSE_P_H
#define QTAWS_CREATENOTEBOOKINSTANCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateNotebookInstanceResponse;

class CreateNotebookInstanceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateNotebookInstanceResponsePrivate(CreateNotebookInstanceResponse * const q);

    void parseCreateNotebookInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNotebookInstanceResponse)
    Q_DISABLE_COPY(CreateNotebookInstanceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
