// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPMEMBERSHIPRESPONSE_H
#define QTAWS_DELETEGROUPMEMBERSHIPRESPONSE_H

#include "identitystoreresponse.h"
#include "deletegroupmembershiprequest.h"

namespace QtAws {
namespace IdentityStore {

class DeleteGroupMembershipResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT DeleteGroupMembershipResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    DeleteGroupMembershipResponse(const DeleteGroupMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGroupMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGroupMembershipResponse)
    Q_DISABLE_COPY(DeleteGroupMembershipResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
