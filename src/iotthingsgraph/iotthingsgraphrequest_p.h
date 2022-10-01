// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTHINGSGRAPHREQUEST_P_H
#define QTAWS_IOTTHINGSGRAPHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class IoTThingsGraphRequest;

class IoTThingsGraphRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTThingsGraphRequest::Action action; ///< IoTThingsGraph action to be performed.
    QString apiVersion;        ///< IoTThingsGraph API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTThingsGraph request (query string) parameters. @todo?

    IoTThingsGraphRequestPrivate(const IoTThingsGraphRequest::Action action, IoTThingsGraphRequest * const q);
    IoTThingsGraphRequestPrivate(const IoTThingsGraphRequestPrivate &other, IoTThingsGraphRequest * const q);

    static QString toString(const IoTThingsGraphRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTThingsGraphRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
