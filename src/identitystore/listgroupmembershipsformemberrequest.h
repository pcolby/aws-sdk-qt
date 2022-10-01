// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERREQUEST_H
#define QTAWS_LISTGROUPMEMBERSHIPSFORMEMBERREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsForMemberRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT ListGroupMembershipsForMemberRequest : public IdentityStoreRequest {

public:
    ListGroupMembershipsForMemberRequest(const ListGroupMembershipsForMemberRequest &other);
    ListGroupMembershipsForMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembershipsForMemberRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
