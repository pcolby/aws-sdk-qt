// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBBATCHRESPONSE_H
#define QTAWS_DESCRIBESIMULATIONJOBBATCHRESPONSE_H

#include "robomakerresponse.h"
#include "describesimulationjobbatchrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobBatchResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeSimulationJobBatchResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeSimulationJobBatchResponse(const DescribeSimulationJobBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSimulationJobBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSimulationJobBatchResponse)
    Q_DISABLE_COPY(DescribeSimulationJobBatchResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
