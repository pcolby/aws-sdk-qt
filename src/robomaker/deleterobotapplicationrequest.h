// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTAPPLICATIONREQUEST_H
#define QTAWS_DELETEROBOTAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT DeleteRobotApplicationRequest : public RoboMakerRequest {

public:
    DeleteRobotApplicationRequest(const DeleteRobotApplicationRequest &other);
    DeleteRobotApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
