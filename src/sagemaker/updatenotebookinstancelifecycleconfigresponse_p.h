// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_P_H
#define QTAWS_UPDATENOTEBOOKINSTANCELIFECYCLECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateNotebookInstanceLifecycleConfigResponse;

class UpdateNotebookInstanceLifecycleConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateNotebookInstanceLifecycleConfigResponsePrivate(UpdateNotebookInstanceLifecycleConfigResponse * const q);

    void parseUpdateNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNotebookInstanceLifecycleConfigResponse)
    Q_DISABLE_COPY(UpdateNotebookInstanceLifecycleConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
