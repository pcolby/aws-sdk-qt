// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALABLETARGETSRESPONSE_H
#define QTAWS_DESCRIBESCALABLETARGETSRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "describescalabletargetsrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalableTargetsResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DescribeScalableTargetsResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    DescribeScalableTargetsResponse(const DescribeScalableTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalableTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalableTargetsResponse)
    Q_DISABLE_COPY(DescribeScalableTargetsResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
