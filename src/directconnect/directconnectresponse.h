// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTCONNECTRESPONSE_H
#define QTAWS_DIRECTCONNECTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdirectconnectglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DirectConnect {

class DirectConnectResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DirectConnectResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DirectConnectResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DirectConnectResponse(DirectConnectResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DirectConnectResponse)
    Q_DISABLE_COPY(DirectConnectResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
