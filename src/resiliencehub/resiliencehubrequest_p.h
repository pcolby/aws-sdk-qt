// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESILIENCEHUBREQUEST_P_H
#define QTAWS_RESILIENCEHUBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ResilienceHubRequest;

class ResilienceHubRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ResilienceHubRequest::Action action; ///< ResilienceHub action to be performed.
    QString apiVersion;        ///< ResilienceHub API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ResilienceHub request (query string) parameters. @todo?

    ResilienceHubRequestPrivate(const ResilienceHubRequest::Action action, ResilienceHubRequest * const q);
    ResilienceHubRequestPrivate(const ResilienceHubRequestPrivate &other, ResilienceHubRequest * const q);

    static QString toString(const ResilienceHubRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ResilienceHubRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
