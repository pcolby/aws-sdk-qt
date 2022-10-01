// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULINGPOLICIESREQUEST_H
#define QTAWS_DESCRIBESCHEDULINGPOLICIESREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DescribeSchedulingPoliciesRequestPrivate;

class QTAWSBATCH_EXPORT DescribeSchedulingPoliciesRequest : public BatchRequest {

public:
    DescribeSchedulingPoliciesRequest(const DescribeSchedulingPoliciesRequest &other);
    DescribeSchedulingPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSchedulingPoliciesRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
