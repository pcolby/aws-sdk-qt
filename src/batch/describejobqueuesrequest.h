// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBQUEUESREQUEST_H
#define QTAWS_DESCRIBEJOBQUEUESREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobQueuesRequestPrivate;

class QTAWSBATCH_EXPORT DescribeJobQueuesRequest : public BatchRequest {

public:
    DescribeJobQueuesRequest(const DescribeJobQueuesRequest &other);
    DescribeJobQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobQueuesRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
