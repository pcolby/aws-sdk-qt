// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERIDREQUEST_H
#define QTAWS_GETUSERIDREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class GetUserIdRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT GetUserIdRequest : public IdentityStoreRequest {

public:
    GetUserIdRequest(const GetUserIdRequest &other);
    GetUserIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserIdRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
