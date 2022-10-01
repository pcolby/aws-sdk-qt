// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPLATFORMSREQUEST_H
#define QTAWS_LISTSIGNINGPLATFORMSREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningPlatformsRequestPrivate;

class QTAWSSIGNER_EXPORT ListSigningPlatformsRequest : public SignerRequest {

public:
    ListSigningPlatformsRequest(const ListSigningPlatformsRequest &other);
    ListSigningPlatformsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningPlatformsRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
