// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERROBOTRESPONSE_H
#define QTAWS_DEREGISTERROBOTRESPONSE_H

#include "robomakerresponse.h"
#include "deregisterrobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeregisterRobotResponsePrivate;

class QTAWSROBOMAKER_EXPORT DeregisterRobotResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DeregisterRobotResponse(const DeregisterRobotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterRobotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterRobotResponse)
    Q_DISABLE_COPY(DeregisterRobotResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
