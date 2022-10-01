// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESREQUEST_H
#define QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityMailFromDomainAttributesRequestPrivate;

class QTAWSSES_EXPORT GetIdentityMailFromDomainAttributesRequest : public SesRequest {

public:
    GetIdentityMailFromDomainAttributesRequest(const GetIdentityMailFromDomainAttributesRequest &other);
    GetIdentityMailFromDomainAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityMailFromDomainAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
