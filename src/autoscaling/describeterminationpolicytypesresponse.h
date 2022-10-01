// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETERMINATIONPOLICYTYPESRESPONSE_H
#define QTAWS_DESCRIBETERMINATIONPOLICYTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describeterminationpolicytypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeTerminationPolicyTypesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeTerminationPolicyTypesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeTerminationPolicyTypesResponse(const DescribeTerminationPolicyTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTerminationPolicyTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTerminationPolicyTypesResponse)
    Q_DISABLE_COPY(DescribeTerminationPolicyTypesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
