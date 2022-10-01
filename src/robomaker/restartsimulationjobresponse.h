// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTSIMULATIONJOBRESPONSE_H
#define QTAWS_RESTARTSIMULATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "restartsimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class RestartSimulationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT RestartSimulationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    RestartSimulationJobResponse(const RestartSimulationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestartSimulationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestartSimulationJobResponse)
    Q_DISABLE_COPY(RestartSimulationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
