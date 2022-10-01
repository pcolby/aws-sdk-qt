// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTREQUEST_H
#define QTAWS_DESCRIBEROBOTREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeRobotRequest : public RoboMakerRequest {

public:
    DescribeRobotRequest(const DescribeRobotRequest &other);
    DescribeRobotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
