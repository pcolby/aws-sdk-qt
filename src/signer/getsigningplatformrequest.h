// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPLATFORMREQUEST_H
#define QTAWS_GETSIGNINGPLATFORMREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class GetSigningPlatformRequestPrivate;

class QTAWSSIGNER_EXPORT GetSigningPlatformRequest : public SignerRequest {

public:
    GetSigningPlatformRequest(const GetSigningPlatformRequest &other);
    GetSigningPlatformRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSigningPlatformRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
