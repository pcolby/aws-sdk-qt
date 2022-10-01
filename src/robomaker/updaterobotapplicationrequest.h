// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROBOTAPPLICATIONREQUEST_H
#define QTAWS_UPDATEROBOTAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateRobotApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT UpdateRobotApplicationRequest : public RoboMakerRequest {

public:
    UpdateRobotApplicationRequest(const UpdateRobotApplicationRequest &other);
    UpdateRobotApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
