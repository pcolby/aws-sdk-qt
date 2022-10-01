// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPOLICIESRESPONSE_H
#define QTAWS_DESCRIBESCALINGPOLICIESRESPONSE_H

#include "gameliftresponse.h"
#include "describescalingpoliciesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeScalingPoliciesResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeScalingPoliciesResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeScalingPoliciesResponse(const DescribeScalingPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalingPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingPoliciesResponse)
    Q_DISABLE_COPY(DescribeScalingPoliciesResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
