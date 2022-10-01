// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHREQUEST_P_H
#define QTAWS_HEALTHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "healthrequest.h"

namespace QtAws {
namespace Health {

class HealthRequest;

class HealthRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    HealthRequest::Action action; ///< Health action to be performed.
    QString apiVersion;        ///< Health API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Health request (query string) parameters. @todo?

    HealthRequestPrivate(const HealthRequest::Action action, HealthRequest * const q);
    HealthRequestPrivate(const HealthRequestPrivate &other, HealthRequest * const q);

    static QString toString(const HealthRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(HealthRequest)

};

} // namespace Health
} // namespace QtAws

#endif
