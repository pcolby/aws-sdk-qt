// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETCAPACITYREQUEST_H
#define QTAWS_DESCRIBEFLEETCAPACITYREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetCapacityRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetCapacityRequest : public GameLiftRequest {

public:
    DescribeFleetCapacityRequest(const DescribeFleetCapacityRequest &other);
    DescribeFleetCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetCapacityRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
