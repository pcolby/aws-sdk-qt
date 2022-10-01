// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVATIONREQUEST_H
#define QTAWS_DESCRIBEOBSERVATIONREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeObservationRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeObservationRequest : public ApplicationInsightsRequest {

public:
    DescribeObservationRequest(const DescribeObservationRequest &other);
    DescribeObservationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObservationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
