// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPROFILEPERMISSIONRESPONSE_H
#define QTAWS_REMOVEPROFILEPERMISSIONRESPONSE_H

#include "signerresponse.h"
#include "removeprofilepermissionrequest.h"

namespace QtAws {
namespace Signer {

class RemoveProfilePermissionResponsePrivate;

class QTAWSSIGNER_EXPORT RemoveProfilePermissionResponse : public SignerResponse {
    Q_OBJECT

public:
    RemoveProfilePermissionResponse(const RemoveProfilePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveProfilePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveProfilePermissionResponse)
    Q_DISABLE_COPY(RemoveProfilePermissionResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
