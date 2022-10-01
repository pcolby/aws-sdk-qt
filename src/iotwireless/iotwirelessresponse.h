// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTWIRELESSRESPONSE_H
#define QTAWS_IOTWIRELESSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotwirelessglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTWireless {

class IoTWirelessResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT IoTWirelessResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTWirelessResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTWirelessResponse(IoTWirelessResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTWirelessResponse)
    Q_DISABLE_COPY(IoTWirelessResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
