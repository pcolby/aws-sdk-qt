// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELQUALITYJOBDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTMODELQUALITYJOBDEFINITIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelQualityJobDefinitionsResponse;

class ListModelQualityJobDefinitionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelQualityJobDefinitionsResponsePrivate(ListModelQualityJobDefinitionsResponse * const q);

    void parseListModelQualityJobDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelQualityJobDefinitionsResponse)
    Q_DISABLE_COPY(ListModelQualityJobDefinitionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
