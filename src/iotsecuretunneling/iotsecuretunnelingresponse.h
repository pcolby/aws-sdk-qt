// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSECURETUNNELINGRESPONSE_H
#define QTAWS_IOTSECURETUNNELINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotsecuretunnelingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingResponsePrivate;

class QTAWSIOTSECURETUNNELING_EXPORT IoTSecureTunnelingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTSecureTunnelingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTSecureTunnelingResponse(IoTSecureTunnelingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTSecureTunnelingResponse)
    Q_DISABLE_COPY(IoTSecureTunnelingResponse)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
