// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSREQUEST_H
#define QTAWS_DESCRIBEJOBSREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobsRequestPrivate;

class QTAWSBATCH_EXPORT DescribeJobsRequest : public BatchRequest {

public:
    DescribeJobsRequest(const DescribeJobsRequest &other);
    DescribeJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
