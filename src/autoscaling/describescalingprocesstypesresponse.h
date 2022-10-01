// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPROCESSTYPESRESPONSE_H
#define QTAWS_DESCRIBESCALINGPROCESSTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describescalingprocesstypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScalingProcessTypesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeScalingProcessTypesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeScalingProcessTypesResponse(const DescribeScalingProcessTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalingProcessTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingProcessTypesResponse)
    Q_DISABLE_COPY(DescribeScalingProcessTypesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
