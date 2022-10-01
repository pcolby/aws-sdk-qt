// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMOBSERVATIONSRESPONSE_H
#define QTAWS_DESCRIBEPROBLEMOBSERVATIONSRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describeproblemobservationsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemObservationsResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeProblemObservationsResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeProblemObservationsResponse(const DescribeProblemObservationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProblemObservationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProblemObservationsResponse)
    Q_DISABLE_COPY(DescribeProblemObservationsResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
