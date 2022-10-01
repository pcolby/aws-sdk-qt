// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEC2INSTANCELIMITSREQUEST_H
#define QTAWS_DESCRIBEEC2INSTANCELIMITSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeEC2InstanceLimitsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeEC2InstanceLimitsRequest : public GameLiftRequest {

public:
    DescribeEC2InstanceLimitsRequest(const DescribeEC2InstanceLimitsRequest &other);
    DescribeEC2InstanceLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEC2InstanceLimitsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
