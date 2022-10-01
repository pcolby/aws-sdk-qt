// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNATURERESPONSE_H
#define QTAWS_REVOKESIGNATURERESPONSE_H

#include "signerresponse.h"
#include "revokesignaturerequest.h"

namespace QtAws {
namespace Signer {

class RevokeSignatureResponsePrivate;

class QTAWSSIGNER_EXPORT RevokeSignatureResponse : public SignerResponse {
    Q_OBJECT

public:
    RevokeSignatureResponse(const RevokeSignatureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeSignatureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSignatureResponse)
    Q_DISABLE_COPY(RevokeSignatureResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
