// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAQUALITYJOBDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTDATAQUALITYJOBDEFINITIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListDataQualityJobDefinitionsResponse;

class ListDataQualityJobDefinitionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListDataQualityJobDefinitionsResponsePrivate(ListDataQualityJobDefinitionsResponse * const q);

    void parseListDataQualityJobDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataQualityJobDefinitionsResponse)
    Q_DISABLE_COPY(ListDataQualityJobDefinitionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
