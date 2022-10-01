// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIGNINGPROFILEREQUEST_H
#define QTAWS_PUTSIGNINGPROFILEREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class PutSigningProfileRequestPrivate;

class QTAWSSIGNER_EXPORT PutSigningProfileRequest : public SignerRequest {

public:
    PutSigningProfileRequest(const PutSigningProfileRequest &other);
    PutSigningProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
