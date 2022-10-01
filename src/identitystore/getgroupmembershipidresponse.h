// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPMEMBERSHIPIDRESPONSE_H
#define QTAWS_GETGROUPMEMBERSHIPIDRESPONSE_H

#include "identitystoreresponse.h"
#include "getgroupmembershipidrequest.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupMembershipIdResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT GetGroupMembershipIdResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    GetGroupMembershipIdResponse(const GetGroupMembershipIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupMembershipIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupMembershipIdResponse)
    Q_DISABLE_COPY(GetGroupMembershipIdResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
