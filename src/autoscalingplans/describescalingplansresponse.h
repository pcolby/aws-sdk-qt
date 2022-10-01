// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANSRESPONSE_H
#define QTAWS_DESCRIBESCALINGPLANSRESPONSE_H

#include "autoscalingplansresponse.h"
#include "describescalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlansResponsePrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT DescribeScalingPlansResponse : public AutoScalingPlansResponse {
    Q_OBJECT

public:
    DescribeScalingPlansResponse(const DescribeScalingPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalingPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingPlansResponse)
    Q_DISABLE_COPY(DescribeScalingPlansResponse)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
