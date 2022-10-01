// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDEVICEADVISORRESPONSE_H
#define QTAWS_IOTDEVICEADVISORRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotdeviceadvisorglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT IotDeviceAdvisorResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IotDeviceAdvisorResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IotDeviceAdvisorResponse(IotDeviceAdvisorResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IotDeviceAdvisorResponse)
    Q_DISABLE_COPY(IotDeviceAdvisorResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
