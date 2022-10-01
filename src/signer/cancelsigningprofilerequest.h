// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIGNINGPROFILEREQUEST_H
#define QTAWS_CANCELSIGNINGPROFILEREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class CancelSigningProfileRequestPrivate;

class QTAWSSIGNER_EXPORT CancelSigningProfileRequest : public SignerRequest {

public:
    CancelSigningProfileRequest(const CancelSigningProfileRequest &other);
    CancelSigningProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSigningProfileRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
