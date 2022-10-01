// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEC2INSTANCELIMITSRESPONSE_H
#define QTAWS_DESCRIBEEC2INSTANCELIMITSRESPONSE_H

#include "gameliftresponse.h"
#include "describeec2instancelimitsrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeEC2InstanceLimitsResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeEC2InstanceLimitsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeEC2InstanceLimitsResponse(const DescribeEC2InstanceLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEC2InstanceLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEC2InstanceLimitsResponse)
    Q_DISABLE_COPY(DescribeEC2InstanceLimitsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
