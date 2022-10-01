// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTREQUEST_H
#define QTAWS_DELETEROBOTREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotRequestPrivate;

class QTAWSROBOMAKER_EXPORT DeleteRobotRequest : public RoboMakerRequest {

public:
    DeleteRobotRequest(const DeleteRobotRequest &other);
    DeleteRobotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
