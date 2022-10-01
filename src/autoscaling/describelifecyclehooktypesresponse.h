// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKTYPESRESPONSE_H
#define QTAWS_DESCRIBELIFECYCLEHOOKTYPESRESPONSE_H

#include "autoscalingresponse.h"
#include "describelifecyclehooktypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHookTypesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLifecycleHookTypesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeLifecycleHookTypesResponse(const DescribeLifecycleHookTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLifecycleHookTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLifecycleHookTypesResponse)
    Q_DISABLE_COPY(DescribeLifecycleHookTypesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
