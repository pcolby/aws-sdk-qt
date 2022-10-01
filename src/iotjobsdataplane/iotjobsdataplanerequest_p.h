// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTJOBSDATAPLANEREQUEST_P_H
#define QTAWS_IOTJOBSDATAPLANEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotjobsdataplanerequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneRequest;

class IoTJobsDataPlaneRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTJobsDataPlaneRequest::Action action; ///< IoTJobsDataPlane action to be performed.
    QString apiVersion;        ///< IoTJobsDataPlane API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTJobsDataPlane request (query string) parameters. @todo?

    IoTJobsDataPlaneRequestPrivate(const IoTJobsDataPlaneRequest::Action action, IoTJobsDataPlaneRequest * const q);
    IoTJobsDataPlaneRequestPrivate(const IoTJobsDataPlaneRequestPrivate &other, IoTJobsDataPlaneRequest * const q);

    static QString toString(const IoTJobsDataPlaneRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTJobsDataPlaneRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
