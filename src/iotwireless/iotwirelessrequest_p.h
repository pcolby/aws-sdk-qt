// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTWIRELESSREQUEST_P_H
#define QTAWS_IOTWIRELESSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class IoTWirelessRequest;

class IoTWirelessRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTWirelessRequest::Action action; ///< IoTWireless action to be performed.
    QString apiVersion;        ///< IoTWireless API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTWireless request (query string) parameters. @todo?

    IoTWirelessRequestPrivate(const IoTWirelessRequest::Action action, IoTWirelessRequest * const q);
    IoTWirelessRequestPrivate(const IoTWirelessRequestPrivate &other, IoTWirelessRequest * const q);

    static QString toString(const IoTWirelessRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTWirelessRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
