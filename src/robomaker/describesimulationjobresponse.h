// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBRESPONSE_H
#define QTAWS_DESCRIBESIMULATIONJOBRESPONSE_H

#include "robomakerresponse.h"
#include "describesimulationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeSimulationJobResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeSimulationJobResponse(const DescribeSimulationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSimulationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSimulationJobResponse)
    Q_DISABLE_COPY(DescribeSimulationJobResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
