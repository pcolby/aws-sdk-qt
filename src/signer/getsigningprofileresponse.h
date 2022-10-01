// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPROFILERESPONSE_H
#define QTAWS_GETSIGNINGPROFILERESPONSE_H

#include "signerresponse.h"
#include "getsigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class GetSigningProfileResponsePrivate;

class QTAWSSIGNER_EXPORT GetSigningProfileResponse : public SignerResponse {
    Q_OBJECT

public:
    GetSigningProfileResponse(const GetSigningProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSigningProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSigningProfileResponse)
    Q_DISABLE_COPY(GetSigningProfileResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
