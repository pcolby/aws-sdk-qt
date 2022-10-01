// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYOBJECTSRESPONSE_P_H
#define QTAWS_QUERYOBJECTSRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class QueryObjectsResponse;

class QueryObjectsResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit QueryObjectsResponsePrivate(QueryObjectsResponse * const q);

    void parseQueryObjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryObjectsResponse)
    Q_DISABLE_COPY(QueryObjectsResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
