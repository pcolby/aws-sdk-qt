// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTRESPONSE_H
#define QTAWS_DELETEROBOTRESPONSE_H

#include "robomakerresponse.h"
#include "deleterobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotResponsePrivate;

class QTAWSROBOMAKER_EXPORT DeleteRobotResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DeleteRobotResponse(const DeleteRobotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRobotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRobotResponse)
    Q_DISABLE_COPY(DeleteRobotResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
