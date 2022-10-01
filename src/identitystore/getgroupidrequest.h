// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPIDREQUEST_H
#define QTAWS_GETGROUPIDREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupIdRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT GetGroupIdRequest : public IdentityStoreRequest {

public:
    GetGroupIdRequest(const GetGroupIdRequest &other);
    GetGroupIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupIdRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
