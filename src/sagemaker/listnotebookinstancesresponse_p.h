// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKINSTANCESRESPONSE_P_H
#define QTAWS_LISTNOTEBOOKINSTANCESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListNotebookInstancesResponse;

class ListNotebookInstancesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListNotebookInstancesResponsePrivate(ListNotebookInstancesResponse * const q);

    void parseListNotebookInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNotebookInstancesResponse)
    Q_DISABLE_COPY(ListNotebookInstancesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
