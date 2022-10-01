// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTFLEETHUBRESPONSE_H
#define QTAWS_IOTFLEETHUBRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotfleethubglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubResponsePrivate;

class QTAWSIOTFLEETHUB_EXPORT IoTFleetHubResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTFleetHubResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTFleetHubResponse(IoTFleetHubResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTFleetHubResponse)
    Q_DISABLE_COPY(IoTFleetHubResponse)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
