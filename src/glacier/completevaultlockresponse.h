// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEVAULTLOCKRESPONSE_H
#define QTAWS_COMPLETEVAULTLOCKRESPONSE_H

#include "glacierresponse.h"
#include "completevaultlockrequest.h"

namespace QtAws {
namespace Glacier {

class CompleteVaultLockResponsePrivate;

class QTAWSGLACIER_EXPORT CompleteVaultLockResponse : public GlacierResponse {
    Q_OBJECT

public:
    CompleteVaultLockResponse(const CompleteVaultLockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteVaultLockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteVaultLockResponse)
    Q_DISABLE_COPY(CompleteVaultLockResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
