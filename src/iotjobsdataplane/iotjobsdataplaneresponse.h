// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTJOBSDATAPLANERESPONSE_H
#define QTAWS_IOTJOBSDATAPLANERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotjobsdataplaneglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneResponsePrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT IoTJobsDataPlaneResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTJobsDataPlaneResponse(QObject * const parent = 0);

protected:
    /// @cond internal
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
