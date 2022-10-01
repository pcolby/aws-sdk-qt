// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOLICIESREQUEST_H
#define QTAWS_GETIDENTITYPOLICIESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityPoliciesRequestPrivate;

class QTAWSSES_EXPORT GetIdentityPoliciesRequest : public SesRequest {

public:
    GetIdentityPoliciesRequest(const GetIdentityPoliciesRequest &other);
    GetIdentityPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityPoliciesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
