// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTFLEETHUBREQUEST_P_H
#define QTAWS_IOTFLEETHUBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotfleethubrequest.h"

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubRequest;

class IoTFleetHubRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTFleetHubRequest::Action action; ///< IoTFleetHub action to be performed.
    QString apiVersion;        ///< IoTFleetHub API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTFleetHub request (query string) parameters. @todo?

    IoTFleetHubRequestPrivate(const IoTFleetHubRequest::Action action, IoTFleetHubRequest * const q);
    IoTFleetHubRequestPrivate(const IoTFleetHubRequestPrivate &other, IoTFleetHubRequest * const q);

    static QString toString(const IoTFleetHubRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTFleetHubRequest)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
