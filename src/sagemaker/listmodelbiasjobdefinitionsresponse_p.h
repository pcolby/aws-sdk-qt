// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELBIASJOBDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTMODELBIASJOBDEFINITIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelBiasJobDefinitionsResponse;

class ListModelBiasJobDefinitionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelBiasJobDefinitionsResponsePrivate(ListModelBiasJobDefinitionsResponse * const q);

    void parseListModelBiasJobDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelBiasJobDefinitionsResponse)
    Q_DISABLE_COPY(ListModelBiasJobDefinitionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
