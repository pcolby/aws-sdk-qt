// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYOBJECTSREQUEST_H
#define QTAWS_QUERYOBJECTSREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class QueryObjectsRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT QueryObjectsRequest : public DataPipelineRequest {

public:
    QueryObjectsRequest(const QueryObjectsRequest &other);
    QueryObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryObjectsRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
