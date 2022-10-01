// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKMANAGERRESPONSE_H
#define QTAWS_NETWORKMANAGERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsnetworkmanagerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace NetworkManager {

class NetworkManagerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT NetworkManagerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    NetworkManagerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    NetworkManagerResponse(NetworkManagerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NetworkManagerResponse)
    Q_DISABLE_COPY(NetworkManagerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
