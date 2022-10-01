// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPUTEENVIRONMENTSREQUEST_H
#define QTAWS_DESCRIBECOMPUTEENVIRONMENTSREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DescribeComputeEnvironmentsRequestPrivate;

class QTAWSBATCH_EXPORT DescribeComputeEnvironmentsRequest : public BatchRequest {

public:
    DescribeComputeEnvironmentsRequest(const DescribeComputeEnvironmentsRequest &other);
    DescribeComputeEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComputeEnvironmentsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
