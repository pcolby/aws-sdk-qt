// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALACCELERATORRESPONSE_H
#define QTAWS_GLOBALACCELERATORRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsglobalacceleratorglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT GlobalAcceleratorResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GlobalAcceleratorResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GlobalAcceleratorResponse(GlobalAcceleratorResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlobalAcceleratorResponse)
    Q_DISABLE_COPY(GlobalAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
