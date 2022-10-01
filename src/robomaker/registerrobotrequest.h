// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERROBOTREQUEST_H
#define QTAWS_REGISTERROBOTREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class RegisterRobotRequestPrivate;

class QTAWSROBOMAKER_EXPORT RegisterRobotRequest : public RoboMakerRequest {

public:
    RegisterRobotRequest(const RegisterRobotRequest &other);
    RegisterRobotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
