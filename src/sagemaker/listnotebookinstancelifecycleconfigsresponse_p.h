// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSRESPONSE_P_H
#define QTAWS_LISTNOTEBOOKINSTANCELIFECYCLECONFIGSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstanceLifecycleConfigsResponse;

class ListNotebookInstanceLifecycleConfigsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListNotebookInstanceLifecycleConfigsResponsePrivate(ListNotebookInstanceLifecycleConfigsResponse * const q);

    void parseListNotebookInstanceLifecycleConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNotebookInstanceLifecycleConfigsResponse)
    Q_DISABLE_COPY(ListNotebookInstanceLifecycleConfigsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
