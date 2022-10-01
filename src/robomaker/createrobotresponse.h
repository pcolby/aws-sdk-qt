// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTRESPONSE_H
#define QTAWS_CREATEROBOTRESPONSE_H

#include "robomakerresponse.h"
#include "createrobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateRobotResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateRobotResponse(const CreateRobotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRobotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRobotResponse)
    Q_DISABLE_COPY(CreateRobotResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
