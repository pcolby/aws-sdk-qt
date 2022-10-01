// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTREQUEST_H
#define QTAWS_CREATEROBOTREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateRobotRequest : public RoboMakerRequest {

public:
    CreateRobotRequest(const CreateRobotRequest &other);
    CreateRobotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
