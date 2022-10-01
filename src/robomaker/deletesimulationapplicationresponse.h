// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIMULATIONAPPLICATIONRESPONSE_H
#define QTAWS_DELETESIMULATIONAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "deletesimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteSimulationApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT DeleteSimulationApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DeleteSimulationApplicationResponse(const DeleteSimulationApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSimulationApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSimulationApplicationResponse)
    Q_DISABLE_COPY(DeleteSimulationApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
