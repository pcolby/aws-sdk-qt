// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMEBASEDAUTOSCALINGRESPONSE_H
#define QTAWS_DESCRIBETIMEBASEDAUTOSCALINGRESPONSE_H

#include "opsworksresponse.h"
#include "describetimebasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeTimeBasedAutoScalingResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeTimeBasedAutoScalingResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeTimeBasedAutoScalingResponse(const DescribeTimeBasedAutoScalingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTimeBasedAutoScalingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTimeBasedAutoScalingResponse)
    Q_DISABLE_COPY(DescribeTimeBasedAutoScalingResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
