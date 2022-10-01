// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERROBOTREQUEST_H
#define QTAWS_DEREGISTERROBOTREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeregisterRobotRequestPrivate;

class QTAWSROBOMAKER_EXPORT DeregisterRobotRequest : public RoboMakerRequest {

public:
    DeregisterRobotRequest(const DeregisterRobotRequest &other);
    DeregisterRobotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
