// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWDEVICEMANAGEMENTRESPONSE_H
#define QTAWS_SNOWDEVICEMANAGEMENTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssnowdevicemanagementglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementResponsePrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT SnowDeviceManagementResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SnowDeviceManagementResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SnowDeviceManagementResponse(SnowDeviceManagementResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SnowDeviceManagementResponse)
    Q_DISABLE_COPY(SnowDeviceManagementResponse)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
