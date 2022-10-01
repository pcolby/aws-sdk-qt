// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTVAULTLOCKRESPONSE_H
#define QTAWS_ABORTVAULTLOCKRESPONSE_H

#include "glacierresponse.h"
#include "abortvaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class AbortVaultLockResponsePrivate;

class QTAWSGLACIER_EXPORT AbortVaultLockResponse : public GlacierResponse {
    Q_OBJECT

public:
    AbortVaultLockResponse(const AbortVaultLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AbortVaultLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortVaultLockResponse)
    Q_DISABLE_COPY(AbortVaultLockResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
