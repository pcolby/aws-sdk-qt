// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONVERSIONREQUEST_H
#define QTAWS_CREATEROBOTAPPLICATIONVERSIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationVersionRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateRobotApplicationVersionRequest : public RoboMakerRequest {

public:
    CreateRobotApplicationVersionRequest(const CreateRobotApplicationVersionRequest &other);
    CreateRobotApplicationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRobotApplicationVersionRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
