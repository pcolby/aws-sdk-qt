// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESREQUEST_H
#define QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityVerificationAttributesRequestPrivate;

class QTAWSSES_EXPORT GetIdentityVerificationAttributesRequest : public SesRequest {

public:
    GetIdentityVerificationAttributesRequest(const GetIdentityVerificationAttributesRequest &other);
    GetIdentityVerificationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityVerificationAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
