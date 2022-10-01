// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDATAPLANERESPONSE_H
#define QTAWS_IOTDATAPLANERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotdataplaneglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT IoTDataPlaneResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTDataPlaneResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTDataPlaneResponse(IoTDataPlaneResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTDataPlaneResponse)
    Q_DISABLE_COPY(IoTDataPlaneResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
