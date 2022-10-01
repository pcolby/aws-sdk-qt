// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_H

#include "identitystoreresponse.h"
#include "describegroupmembershiprequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupMembershipResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT DescribeGroupMembershipResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    DescribeGroupMembershipResponse(const DescribeGroupMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGroupMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupMembershipResponse)
    Q_DISABLE_COPY(DescribeGroupMembershipResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
