// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELEXPLAINABILITYJOBDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTMODELEXPLAINABILITYJOBDEFINITIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelExplainabilityJobDefinitionsResponse;

class ListModelExplainabilityJobDefinitionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelExplainabilityJobDefinitionsResponsePrivate(ListModelExplainabilityJobDefinitionsResponse * const q);

    void parseListModelExplainabilityJobDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelExplainabilityJobDefinitionsResponse)
    Q_DISABLE_COPY(ListModelExplainabilityJobDefinitionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
