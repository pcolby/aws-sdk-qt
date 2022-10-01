// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCOSTESTIMATIONRESPONSE_H
#define QTAWS_STARTCOSTESTIMATIONRESPONSE_H

#include "devopsgururesponse.h"
#include "startcostestimationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class StartCostEstimationResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT StartCostEstimationResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    StartCostEstimationResponse(const StartCostEstimationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCostEstimationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCostEstimationResponse)
    Q_DISABLE_COPY(StartCostEstimationResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
