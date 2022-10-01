// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONUTILIZATIONREQUEST_H
#define QTAWS_DESCRIBEFLEETLOCATIONUTILIZATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationUtilizationRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetLocationUtilizationRequest : public GameLiftRequest {

public:
    DescribeFleetLocationUtilizationRequest(const DescribeFleetLocationUtilizationRequest &other);
    DescribeFleetLocationUtilizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetLocationUtilizationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
