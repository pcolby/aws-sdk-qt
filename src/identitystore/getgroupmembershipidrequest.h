// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPMEMBERSHIPIDREQUEST_H
#define QTAWS_GETGROUPMEMBERSHIPIDREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupMembershipIdRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT GetGroupMembershipIdRequest : public IdentityStoreRequest {

public:
    GetGroupMembershipIdRequest(const GetGroupMembershipIdRequest &other);
    GetGroupMembershipIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupMembershipIdRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
