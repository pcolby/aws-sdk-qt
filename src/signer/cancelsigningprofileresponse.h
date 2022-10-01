// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIGNINGPROFILERESPONSE_H
#define QTAWS_CANCELSIGNINGPROFILERESPONSE_H

#include "signerresponse.h"
#include "cancelsigningprofilerequest.h"

namespace QtAws {
namespace Signer {

class CancelSigningProfileResponsePrivate;

class QTAWSSIGNER_EXPORT CancelSigningProfileResponse : public SignerResponse {
    Q_OBJECT

public:
    CancelSigningProfileResponse(const CancelSigningProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelSigningProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSigningProfileResponse)
    Q_DISABLE_COPY(CancelSigningProfileResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
