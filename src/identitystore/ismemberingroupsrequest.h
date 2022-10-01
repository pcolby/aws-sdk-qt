// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISMEMBERINGROUPSREQUEST_H
#define QTAWS_ISMEMBERINGROUPSREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class IsMemberInGroupsRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT IsMemberInGroupsRequest : public IdentityStoreRequest {

public:
    IsMemberInGroupsRequest(const IsMemberInGroupsRequest &other);
    IsMemberInGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IsMemberInGroupsRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
