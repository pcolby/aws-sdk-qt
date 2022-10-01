// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVATIONRESPONSE_H
#define QTAWS_DESCRIBEOBSERVATIONRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describeobservationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeObservationResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeObservationResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeObservationResponse(const DescribeObservationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeObservationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObservationResponse)
    Q_DISABLE_COPY(DescribeObservationResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
