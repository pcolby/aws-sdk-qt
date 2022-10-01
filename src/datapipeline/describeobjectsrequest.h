// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTSREQUEST_H
#define QTAWS_DESCRIBEOBJECTSREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DescribeObjectsRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT DescribeObjectsRequest : public DataPipelineRequest {

public:
    DescribeObjectsRequest(const DescribeObjectsRequest &other);
    DescribeObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObjectsRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
