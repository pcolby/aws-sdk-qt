// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTFLOWDEFINITIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListFlowDefinitionsResponse;

class ListFlowDefinitionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListFlowDefinitionsResponsePrivate(ListFlowDefinitionsResponse * const q);

    void parseListFlowDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFlowDefinitionsResponse)
    Q_DISABLE_COPY(ListFlowDefinitionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
