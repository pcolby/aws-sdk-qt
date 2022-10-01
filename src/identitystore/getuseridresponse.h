// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERIDRESPONSE_H
#define QTAWS_GETUSERIDRESPONSE_H

#include "identitystoreresponse.h"
#include "getuseridrequest.h"

namespace QtAws {
namespace IdentityStore {

class GetUserIdResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT GetUserIdResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    GetUserIdResponse(const GetUserIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserIdResponse)
    Q_DISABLE_COPY(GetUserIdResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
