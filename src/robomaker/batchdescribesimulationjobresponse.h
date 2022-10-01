// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBESIMULATIONJOBRESPONSE_H
#define QTAWS_BATCHDESCRIBESIMULATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "batchdescribesimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class BatchDescribeSimulationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT BatchDescribeSimulationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    BatchDescribeSimulationJobResponse(const BatchDescribeSimulationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDescribeSimulationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeSimulationJobResponse)
    Q_DISABLE_COPY(BatchDescribeSimulationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
