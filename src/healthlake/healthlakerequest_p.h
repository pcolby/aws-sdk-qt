// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHLAKEREQUEST_P_H
#define QTAWS_HEALTHLAKEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class HealthLakeRequest;

class HealthLakeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    HealthLakeRequest::Action action; ///< HealthLake action to be performed.
    QString apiVersion;        ///< HealthLake API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< HealthLake request (query string) parameters. @todo?

    HealthLakeRequestPrivate(const HealthLakeRequest::Action action, HealthLakeRequest * const q);
    HealthLakeRequestPrivate(const HealthLakeRequestPrivate &other, HealthLakeRequest * const q);

    static QString toString(const HealthLakeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(HealthLakeRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
