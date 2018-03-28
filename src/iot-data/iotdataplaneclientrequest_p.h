/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IOTDATAPLANECLIENTREQUEST_P_H
#define QTAWS_IOTDATAPLANECLIENTREQUEST_P_H

#include "iotdataplane_p.h"
#include "request.h"

namespace AWS {

namespace IoTDataPlane {

class IoTDataPlaneClientRequest;

class QTAWS_EXPORT IoTDataPlaneClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    IoTDataPlaneClientRequest::Action action; ///< IoTDataPlane action to be performed.
    QString apiVersion;        ///< IoTDataPlane API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTDataPlane request (query string) parameters. @todo?

    IoTDataPlaneClientRequestPrivate(const IoTDataPlaneClientRequest::Action action, IoTDataPlaneClientRequest * const q);
    IoTDataPlaneClientRequestPrivate(const RequestPrivate &other, IoTDataPlaneClientRequest * const q);

    static QString toString(const IoTDataPlaneClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTDataPlaneClientRequest)

};

} // namespace IoTDataPlane
} // namespace AWS

#endif
