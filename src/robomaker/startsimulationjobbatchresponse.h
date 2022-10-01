// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIMULATIONJOBBATCHRESPONSE_H
#define QTAWS_STARTSIMULATIONJOBBATCHRESPONSE_H

#include "robomakerresponse.h"
#include "startsimulationjobbatchrequest.h"

namespace QtAws {
namespace RoboMaker {

class StartSimulationJobBatchResponsePrivate;

class QTAWSROBOMAKER_EXPORT StartSimulationJobBatchResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    StartSimulationJobBatchResponse(const StartSimulationJobBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSimulationJobBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSimulationJobBatchResponse)
    Q_DISABLE_COPY(StartSimulationJobBatchResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
