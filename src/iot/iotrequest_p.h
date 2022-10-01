// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTREQUEST_P_H
#define QTAWS_IOTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class IoTRequest;

class IoTRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTRequest::Action action; ///< IoT action to be performed.
    QString apiVersion;        ///< IoT API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoT request (query string) parameters. @todo?

    IoTRequestPrivate(const IoTRequest::Action action, IoTRequest * const q);
    IoTRequestPrivate(const IoTRequestPrivate &other, IoTRequest * const q);

    static QString toString(const IoTRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
