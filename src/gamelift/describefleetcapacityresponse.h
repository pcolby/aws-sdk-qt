// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETCAPACITYRESPONSE_H
#define QTAWS_DESCRIBEFLEETCAPACITYRESPONSE_H

#include "gameliftresponse.h"
#include "describefleetcapacityrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetCapacityResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetCapacityResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeFleetCapacityResponse(const DescribeFleetCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetCapacityResponse)
    Q_DISABLE_COPY(DescribeFleetCapacityResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
