// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONREQUEST_H
#define QTAWS_CREATEROBOTAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateRobotApplicationRequest : public RoboMakerRequest {

public:
    CreateRobotApplicationRequest(const CreateRobotApplicationRequest &other);
    CreateRobotApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
