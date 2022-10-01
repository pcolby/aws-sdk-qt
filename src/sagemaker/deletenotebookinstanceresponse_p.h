// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCERESPONSE_P_H
#define QTAWS_DELETENOTEBOOKINSTANCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceResponse;

class DeleteNotebookInstanceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteNotebookInstanceResponsePrivate(DeleteNotebookInstanceResponse * const q);

    void parseDeleteNotebookInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotebookInstanceResponse)
    Q_DISABLE_COPY(DeleteNotebookInstanceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
