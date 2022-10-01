// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROBOTAPPLICATIONRESPONSE_H
#define QTAWS_UPDATEROBOTAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "updaterobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateRobotApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT UpdateRobotApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    UpdateRobotApplicationResponse(const UpdateRobotApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRobotApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRobotApplicationResponse)
    Q_DISABLE_COPY(UpdateRobotApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
