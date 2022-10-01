// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTRESPONSE_H
#define QTAWS_PINPOINTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspinpointglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Pinpoint {

class PinpointResponsePrivate;

class QTAWSPINPOINT_EXPORT PinpointResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PinpointResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PinpointResponse(PinpointResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointResponse)
    Q_DISABLE_COPY(PinpointResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
