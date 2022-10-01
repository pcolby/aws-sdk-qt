// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINIDENTITYREQUEST_H
#define QTAWS_VERIFYDOMAINIDENTITYREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class VerifyDomainIdentityRequestPrivate;

class QTAWSSES_EXPORT VerifyDomainIdentityRequest : public SesRequest {

public:
    VerifyDomainIdentityRequest(const VerifyDomainIdentityRequest &other);
    VerifyDomainIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyDomainIdentityRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
