// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUNDSTATIONREQUEST_P_H
#define QTAWS_GROUNDSTATIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GroundStationRequest;

class GroundStationRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GroundStationRequest::Action action; ///< GroundStation action to be performed.
    QString apiVersion;        ///< GroundStation API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GroundStation request (query string) parameters. @todo?

    GroundStationRequestPrivate(const GroundStationRequest::Action action, GroundStationRequest * const q);
    GroundStationRequestPrivate(const GroundStationRequestPrivate &other, GroundStationRequest * const q);

    static QString toString(const GroundStationRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GroundStationRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
