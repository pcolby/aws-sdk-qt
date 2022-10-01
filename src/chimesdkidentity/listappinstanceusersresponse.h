// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERSRESPONSE_H
#define QTAWS_LISTAPPINSTANCEUSERSRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "listappinstanceusersrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUsersResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstanceUsersResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    ListAppInstanceUsersResponse(const ListAppInstanceUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppInstanceUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceUsersResponse)
    Q_DISABLE_COPY(ListAppInstanceUsersResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
