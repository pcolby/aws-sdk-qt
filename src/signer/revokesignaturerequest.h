// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKESIGNATUREREQUEST_H
#define QTAWS_REVOKESIGNATUREREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class RevokeSignatureRequestPrivate;

class QTAWSSIGNER_EXPORT RevokeSignatureRequest : public SignerRequest {

public:
    RevokeSignatureRequest(const RevokeSignatureRequest &other);
    RevokeSignatureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeSignatureRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
