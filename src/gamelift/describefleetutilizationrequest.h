// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETUTILIZATIONREQUEST_H
#define QTAWS_DESCRIBEFLEETUTILIZATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetUtilizationRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetUtilizationRequest : public GameLiftRequest {

public:
    DescribeFleetUtilizationRequest(const DescribeFleetUtilizationRequest &other);
    DescribeFleetUtilizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetUtilizationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
