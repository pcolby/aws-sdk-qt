// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKDEVICESRESPONSE_H
#define QTAWS_IOT1CLICKDEVICESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiot1clickdevicesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoT1ClickDevices {

class IoT1ClickDevicesResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT IoT1ClickDevicesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoT1ClickDevicesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoT1ClickDevicesResponse(IoT1ClickDevicesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoT1ClickDevicesResponse)
    Q_DISABLE_COPY(IoT1ClickDevicesResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
