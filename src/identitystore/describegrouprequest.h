// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPREQUEST_H
#define QTAWS_DESCRIBEGROUPREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT DescribeGroupRequest : public IdentityStoreRequest {

public:
    DescribeGroupRequest(const DescribeGroupRequest &other);
    DescribeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
