// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTAPPLICATIONRESPONSE_H
#define QTAWS_DELETEROBOTAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "deleterobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT DeleteRobotApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DeleteRobotApplicationResponse(const DeleteRobotApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRobotApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRobotApplicationResponse)
    Q_DISABLE_COPY(DeleteRobotApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
