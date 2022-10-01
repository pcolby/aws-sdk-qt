// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOCATIONREQUEST_P_H
#define QTAWS_LOCATIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "locationrequest.h"

namespace QtAws {
namespace Location {

class LocationRequest;

class LocationRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LocationRequest::Action action; ///< Location action to be performed.
    QString apiVersion;        ///< Location API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Location request (query string) parameters. @todo?

    LocationRequestPrivate(const LocationRequest::Action action, LocationRequest * const q);
    LocationRequestPrivate(const LocationRequestPrivate &other, LocationRequest * const q);

    static QString toString(const LocationRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LocationRequest)

};

} // namespace Location
} // namespace QtAws

#endif
