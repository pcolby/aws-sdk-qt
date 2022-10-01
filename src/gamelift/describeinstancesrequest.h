// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESREQUEST_H
#define QTAWS_DESCRIBEINSTANCESREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeInstancesRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeInstancesRequest : public GameLiftRequest {

public:
    DescribeInstancesRequest(const DescribeInstancesRequest &other);
    DescribeInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
