// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRIVATENETWORKSRESPONSE_H
#define QTAWS_PRIVATENETWORKSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsprivatenetworksglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace PrivateNetworks {

class PrivateNetworksResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT PrivateNetworksResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PrivateNetworksResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PrivateNetworksResponse(PrivateNetworksResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PrivateNetworksResponse)
    Q_DISABLE_COPY(PrivateNetworksResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
