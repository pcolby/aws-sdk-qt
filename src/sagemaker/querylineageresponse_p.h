// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYLINEAGERESPONSE_P_H
#define QTAWS_QUERYLINEAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class QueryLineageResponse;

class QueryLineageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit QueryLineageResponsePrivate(QueryLineageResponse * const q);

    void parseQueryLineageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryLineageResponse)
    Q_DISABLE_COPY(QueryLineageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
