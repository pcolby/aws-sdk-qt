// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONJOBRESPONSE_H
#define QTAWS_CREATESIMULATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "createsimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateSimulationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateSimulationJobResponse(const CreateSimulationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSimulationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSimulationJobResponse)
    Q_DISABLE_COPY(CreateSimulationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
