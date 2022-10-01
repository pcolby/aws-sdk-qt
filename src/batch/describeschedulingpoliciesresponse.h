// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULINGPOLICIESRESPONSE_H
#define QTAWS_DESCRIBESCHEDULINGPOLICIESRESPONSE_H

#include "batchresponse.h"
#include "describeschedulingpoliciesrequest.h"

namespace QtAws {
namespace Batch {

class DescribeSchedulingPoliciesResponsePrivate;

class QTAWSBATCH_EXPORT DescribeSchedulingPoliciesResponse : public BatchResponse {
    Q_OBJECT

public:
    DescribeSchedulingPoliciesResponse(const DescribeSchedulingPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSchedulingPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSchedulingPoliciesResponse)
    Q_DISABLE_COPY(DescribeSchedulingPoliciesResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
