// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIGNINGPROFILERESPONSE_H
#define QTAWS_PUTSIGNINGPROFILERESPONSE_H

#include "signerresponse.h"
#include "putsigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class PutSigningProfileResponsePrivate;

class QTAWSSIGNER_EXPORT PutSigningProfileResponse : public SignerResponse {
    Q_OBJECT

public:
    PutSigningProfileResponse(const PutSigningProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSigningProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSigningProfileResponse)
    Q_DISABLE_COPY(PutSigningProfileResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
