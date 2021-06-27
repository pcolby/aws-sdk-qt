/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_IOTJOBSDATAPLANERESPONSE_H
#define QTAWS_IOTJOBSDATAPLANERESPONSE_H

#include "core/awsabstractresponse.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneResponsePrivate;

class QTAWS_EXPORT IoTJobsDataPlaneResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTJobsDataPlaneResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTJobsDataPlaneResponsePrivate * const d_ptr; ///< Internal d-pointer.
    IoTJobsDataPlaneResponse(IoTJobsDataPlaneResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTJobsDataPlaneResponse)
    Q_DISABLE_COPY(IoTJobsDataPlaneResponse)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
