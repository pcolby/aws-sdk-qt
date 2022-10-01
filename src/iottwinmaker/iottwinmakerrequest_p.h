// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTWINMAKERREQUEST_P_H
#define QTAWS_IOTTWINMAKERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iottwinmakerrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class IoTTwinMakerRequest;

class IoTTwinMakerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTTwinMakerRequest::Action action; ///< IoTTwinMaker action to be performed.
    QString apiVersion;        ///< IoTTwinMaker API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTTwinMaker request (query string) parameters. @todo?

    IoTTwinMakerRequestPrivate(const IoTTwinMakerRequest::Action action, IoTTwinMakerRequest * const q);
    IoTTwinMakerRequestPrivate(const IoTTwinMakerRequestPrivate &other, IoTTwinMakerRequest * const q);

    static QString toString(const IoTTwinMakerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTTwinMakerRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
