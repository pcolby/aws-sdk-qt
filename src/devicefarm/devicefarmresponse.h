// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVICEFARMRESPONSE_H
#define QTAWS_DEVICEFARMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdevicefarmglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeviceFarmResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DeviceFarmResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DeviceFarmResponse(DeviceFarmResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeviceFarmResponse)
    Q_DISABLE_COPY(DeviceFarmResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
