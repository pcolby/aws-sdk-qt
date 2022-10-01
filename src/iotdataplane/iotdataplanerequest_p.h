// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDATAPLANEREQUEST_P_H
#define QTAWS_IOTDATAPLANEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotdataplanerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneRequest;

class IoTDataPlaneRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTDataPlaneRequest::Action action; ///< IoTDataPlane action to be performed.
    QString apiVersion;        ///< IoTDataPlane API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTDataPlane request (query string) parameters. @todo?

    IoTDataPlaneRequestPrivate(const IoTDataPlaneRequest::Action action, IoTDataPlaneRequest * const q);
    IoTDataPlaneRequestPrivate(const IoTDataPlaneRequestPrivate &other, IoTDataPlaneRequest * const q);

    static QString toString(const IoTDataPlaneRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTDataPlaneRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
