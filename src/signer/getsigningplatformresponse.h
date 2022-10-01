// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPLATFORMRESPONSE_H
#define QTAWS_GETSIGNINGPLATFORMRESPONSE_H

#include "signerresponse.h"
#include "getsigningplatformrequest.h"

namespace QtAws {
namespace Signer {

class GetSigningPlatformResponsePrivate;

class QTAWSSIGNER_EXPORT GetSigningPlatformResponse : public SignerResponse {
    Q_OBJECT

public:
    GetSigningPlatformResponse(const GetSigningPlatformRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSigningPlatformRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSigningPlatformResponse)
    Q_DISABLE_COPY(GetSigningPlatformResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
