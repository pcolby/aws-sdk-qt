// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERREQUEST_H
#define QTAWS_DESCRIBEUSERREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeUserRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT DescribeUserRequest : public IdentityStoreRequest {

public:
    DescribeUserRequest(const DescribeUserRequest &other);
    DescribeUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
