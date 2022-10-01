// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROBLEMOBSERVATIONSREQUEST_H
#define QTAWS_DESCRIBEPROBLEMOBSERVATIONSREQUEST_H

#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeProblemObservationsRequestPrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeProblemObservationsRequest : public ApplicationInsightsRequest {

public:
    DescribeProblemObservationsRequest(const DescribeProblemObservationsRequest &other);
    DescribeProblemObservationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProblemObservationsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
