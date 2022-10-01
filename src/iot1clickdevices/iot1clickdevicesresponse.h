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
