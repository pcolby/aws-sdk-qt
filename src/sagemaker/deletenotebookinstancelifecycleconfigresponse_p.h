// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_P_H
#define QTAWS_DELETENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteNotebookInstanceLifecycleConfigResponse;

class DeleteNotebookInstanceLifecycleConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteNotebookInstanceLifecycleConfigResponsePrivate(DeleteNotebookInstanceLifecycleConfigResponse * const q);

    void parseDeleteNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(DeleteNotebookInstanceLifecycleConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
