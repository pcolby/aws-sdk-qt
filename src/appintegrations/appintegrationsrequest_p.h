// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPINTEGRATIONSREQUEST_P_H
#define QTAWS_APPINTEGRATIONSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appintegrationsrequest.h"

namespace QtAws {
namespace AppIntegrations {

class AppIntegrationsRequest;

class AppIntegrationsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppIntegrationsRequest::Action action; ///< AppIntegrations action to be performed.
    QString apiVersion;        ///< AppIntegrations API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppIntegrations request (query string) parameters. @todo?

    AppIntegrationsRequestPrivate(const AppIntegrationsRequest::Action action, AppIntegrationsRequest * const q);
    AppIntegrationsRequestPrivate(const AppIntegrationsRequestPrivate &other, AppIntegrationsRequest * const q);

    static QString toString(const AppIntegrationsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppIntegrationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
