/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IOTJOBSDATAPLANEREQUEST_P_H
#define QTAWS_IOTJOBSDATAPLANEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotjobsdataplanerequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneRequest;

class QTAWS_EXPORT IoTJobsDataPlaneRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
