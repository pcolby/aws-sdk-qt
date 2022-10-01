// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTAPPLICATIONREQUEST_H
#define QTAWS_DESCRIBEROBOTAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeRobotApplicationRequest : public RoboMakerRequest {

public:
    DescribeRobotApplicationRequest(const DescribeRobotApplicationRequest &other);
    DescribeRobotApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
