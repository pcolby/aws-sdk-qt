// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONRESPONSE_H
#define QTAWS_CREATEROBOTAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "createrobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateRobotApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateRobotApplicationResponse(const CreateRobotApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRobotApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRobotApplicationResponse)
    Q_DISABLE_COPY(CreateRobotApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
