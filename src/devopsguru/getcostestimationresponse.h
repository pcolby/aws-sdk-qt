// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTESTIMATIONRESPONSE_H
#define QTAWS_GETCOSTESTIMATIONRESPONSE_H

#include "devopsgururesponse.h"
#include "getcostestimationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetCostEstimationResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT GetCostEstimationResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    GetCostEstimationResponse(const GetCostEstimationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCostEstimationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostEstimationResponse)
    Q_DISABLE_COPY(GetCostEstimationResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
