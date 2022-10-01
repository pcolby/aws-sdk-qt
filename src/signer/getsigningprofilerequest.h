// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNINGPROFILEREQUEST_H
#define QTAWS_GETSIGNINGPROFILEREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class GetSigningProfileRequestPrivate;

class QTAWSSIGNER_EXPORT GetSigningProfileRequest : public SignerRequest {

public:
    GetSigningProfileRequest(const GetSigningProfileRequest &other);
    GetSigningProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
