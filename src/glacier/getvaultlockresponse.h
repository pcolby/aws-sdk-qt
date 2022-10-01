// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTLOCKRESPONSE_H
#define QTAWS_GETVAULTLOCKRESPONSE_H

#include "glacierresponse.h"
#include "getvaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultLockResponsePrivate;

class QTAWSGLACIER_EXPORT GetVaultLockResponse : public GlacierResponse {
    Q_OBJECT

public:
    GetVaultLockResponse(const GetVaultLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVaultLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVaultLockResponse)
    Q_DISABLE_COPY(GetVaultLockResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
