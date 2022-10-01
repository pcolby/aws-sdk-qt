// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNINGPROFILEREQUEST_H
#define QTAWS_REVOKESIGNINGPROFILEREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class RevokeSigningProfileRequestPrivate;

class QTAWSSIGNER_EXPORT RevokeSigningProfileRequest : public SignerRequest {

public:
    RevokeSigningProfileRequest(const RevokeSigningProfileRequest &other);
    RevokeSigningProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
