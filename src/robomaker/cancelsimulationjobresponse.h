// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBRESPONSE_H
#define QTAWS_CANCELSIMULATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "cancelsimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CancelSimulationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CancelSimulationJobResponse(const CancelSimulationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelSimulationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSimulationJobResponse)
    Q_DISABLE_COPY(CancelSimulationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
