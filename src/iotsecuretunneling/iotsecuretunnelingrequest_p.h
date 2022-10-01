// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSECURETUNNELINGREQUEST_P_H
#define QTAWS_IOTSECURETUNNELINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotsecuretunnelingrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingRequest;

class IoTSecureTunnelingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTSecureTunnelingRequest::Action action; ///< IoTSecureTunneling action to be performed.
    QString apiVersion;        ///< IoTSecureTunneling API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTSecureTunneling request (query string) parameters. @todo?

    IoTSecureTunnelingRequestPrivate(const IoTSecureTunnelingRequest::Action action, IoTSecureTunnelingRequest * const q);
    IoTSecureTunnelingRequestPrivate(const IoTSecureTunnelingRequestPrivate &other, IoTSecureTunnelingRequest * const q);

    static QString toString(const IoTSecureTunnelingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTSecureTunnelingRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
