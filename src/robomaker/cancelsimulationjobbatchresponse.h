// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBBATCHRESPONSE_H
#define QTAWS_CANCELSIMULATIONJOBBATCHRESPONSE_H

#include "robomakerresponse.h"
#include "cancelsimulationjobbatchrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobBatchResponsePrivate;

class QTAWSROBOMAKER_EXPORT CancelSimulationJobBatchResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CancelSimulationJobBatchResponse(const CancelSimulationJobBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelSimulationJobBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSimulationJobBatchResponse)
    Q_DISABLE_COPY(CancelSimulationJobBatchResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
