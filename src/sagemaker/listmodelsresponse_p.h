// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELSRESPONSE_P_H
#define QTAWS_LISTMODELSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListModelsResponse;

class ListModelsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListModelsResponsePrivate(ListModelsResponse * const q);

    void parseListModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListModelsResponse)
    Q_DISABLE_COPY(ListModelsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
