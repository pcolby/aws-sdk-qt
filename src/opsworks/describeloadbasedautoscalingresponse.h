// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBASEDAUTOSCALINGRESPONSE_H
#define QTAWS_DESCRIBELOADBASEDAUTOSCALINGRESPONSE_H

#include "opsworksresponse.h"
#include "describeloadbasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLoadBasedAutoScalingResponsePrivate;

class QTAWSOPSWORKS_EXPORT DescribeLoadBasedAutoScalingResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DescribeLoadBasedAutoScalingResponse(const DescribeLoadBasedAutoScalingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoadBasedAutoScalingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBasedAutoScalingResponse)
    Q_DISABLE_COPY(DescribeLoadBasedAutoScalingResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
