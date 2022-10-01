// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERROBOTRESPONSE_H
#define QTAWS_REGISTERROBOTRESPONSE_H

#include "robomakerresponse.h"
#include "registerrobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class RegisterRobotResponsePrivate;

class QTAWSROBOMAKER_EXPORT RegisterRobotResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    RegisterRobotResponse(const RegisterRobotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterRobotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterRobotResponse)
    Q_DISABLE_COPY(RegisterRobotResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
