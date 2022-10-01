// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOLICIESREQUEST_H
#define QTAWS_LISTIDENTITYPOLICIESREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class ListIdentityPoliciesRequestPrivate;

class QTAWSSES_EXPORT ListIdentityPoliciesRequest : public SesRequest {

public:
    ListIdentityPoliciesRequest(const ListIdentityPoliciesRequest &other);
    ListIdentityPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityPoliciesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
