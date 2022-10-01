// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPIDRESPONSE_H
#define QTAWS_GETGROUPIDRESPONSE_H

#include "identitystoreresponse.h"
#include "getgroupidrequest.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupIdResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT GetGroupIdResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    GetGroupIdResponse(const GetGroupIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupIdResponse)
    Q_DISABLE_COPY(GetGroupIdResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
