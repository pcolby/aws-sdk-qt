// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEVAULTLOCKRESPONSE_H
#define QTAWS_INITIATEVAULTLOCKRESPONSE_H

#include "glacierresponse.h"
#include "initiatevaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateVaultLockResponsePrivate;

class QTAWSGLACIER_EXPORT InitiateVaultLockResponse : public GlacierResponse {
    Q_OBJECT

public:
    InitiateVaultLockResponse(const InitiateVaultLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateVaultLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateVaultLockResponse)
    Q_DISABLE_COPY(InitiateVaultLockResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
