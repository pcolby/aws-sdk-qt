// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_H
#define QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_H

#include "identitystoreresponse.h"
#include "listgroupmembershipsrequest.h"

namespace QtAws {
namespace IdentityStore {

class ListGroupMembershipsResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT ListGroupMembershipsResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    ListGroupMembershipsResponse(const ListGroupMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupMembershipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupMembershipsResponse)
    Q_DISABLE_COPY(ListGroupMembershipsResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
