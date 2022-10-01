// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETRESPONSE_H
#define QTAWS_DELETEFLEETRESPONSE_H

#include "robomakerresponse.h"
#include "deletefleetrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteFleetResponsePrivate;

class QTAWSROBOMAKER_EXPORT DeleteFleetResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DeleteFleetResponse(const DeleteFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetResponse)
    Q_DISABLE_COPY(DeleteFleetResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
