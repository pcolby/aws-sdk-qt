// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISMEMBERINGROUPSRESPONSE_H
#define QTAWS_ISMEMBERINGROUPSRESPONSE_H

#include "identitystoreresponse.h"
#include "ismemberingroupsrequest.h"

namespace QtAws {
namespace IdentityStore {

class IsMemberInGroupsResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT IsMemberInGroupsResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    IsMemberInGroupsResponse(const IsMemberInGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IsMemberInGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IsMemberInGroupsResponse)
    Q_DISABLE_COPY(IsMemberInGroupsResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
