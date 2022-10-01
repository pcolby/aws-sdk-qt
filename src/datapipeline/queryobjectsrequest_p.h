// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYOBJECTSREQUEST_P_H
#define QTAWS_QUERYOBJECTSREQUEST_P_H

#include "datapipelinerequest_p.h"
#include "queryobjectsrequest.h"

namespace QtAws {
namespace DataPipeline {

class QueryObjectsRequest;

class QueryObjectsRequestPrivate : public DataPipelineRequestPrivate {

public:
    QueryObjectsRequestPrivate(const DataPipelineRequest::Action action,
                                   QueryObjectsRequest * const q);
    QueryObjectsRequestPrivate(const QueryObjectsRequestPrivate &other,
                                   QueryObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryObjectsRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
