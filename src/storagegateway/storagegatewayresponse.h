// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STORAGEGATEWAYRESPONSE_H
#define QTAWS_STORAGEGATEWAYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsstoragegatewayglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace StorageGateway {

class StorageGatewayResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT StorageGatewayResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    StorageGatewayResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    StorageGatewayResponse(StorageGatewayResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StorageGatewayResponse)
    Q_DISABLE_COPY(StorageGatewayResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
