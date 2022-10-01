// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONINSIGHTSREQUEST_P_H
#define QTAWS_APPLICATIONINSIGHTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsRequest;

class ApplicationInsightsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApplicationInsightsRequest::Action action; ///< ApplicationInsights action to be performed.
    QString apiVersion;        ///< ApplicationInsights API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApplicationInsights request (query string) parameters. @todo?

    ApplicationInsightsRequestPrivate(const ApplicationInsightsRequest::Action action, ApplicationInsightsRequest * const q);
    ApplicationInsightsRequestPrivate(const ApplicationInsightsRequestPrivate &other, ApplicationInsightsRequest * const q);

    static QString toString(const ApplicationInsightsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApplicationInsightsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
