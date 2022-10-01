// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNINGPROFILERESPONSE_H
#define QTAWS_REVOKESIGNINGPROFILERESPONSE_H

#include "signerresponse.h"
#include "revokesigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class RevokeSigningProfileResponsePrivate;

class QTAWSSIGNER_EXPORT RevokeSigningProfileResponse : public SignerResponse {
    Q_OBJECT

public:
    RevokeSigningProfileResponse(const RevokeSigningProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeSigningProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSigningProfileResponse)
    Q_DISABLE_COPY(RevokeSigningProfileResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
