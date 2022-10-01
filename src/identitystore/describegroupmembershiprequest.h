// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupMembershipRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT DescribeGroupMembershipRequest : public IdentityStoreRequest {

public:
    DescribeGroupMembershipRequest(const DescribeGroupMembershipRequest &other);
    DescribeGroupMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupMembershipRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
