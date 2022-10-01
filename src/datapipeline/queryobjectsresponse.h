// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYOBJECTSRESPONSE_H
#define QTAWS_QUERYOBJECTSRESPONSE_H

#include "datapipelineresponse.h"
#include "queryobjectsrequest.h"

namespace QtAws {
namespace DataPipeline {

class QueryObjectsResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT QueryObjectsResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    QueryObjectsResponse(const QueryObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryObjectsResponse)
    Q_DISABLE_COPY(QueryObjectsResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
