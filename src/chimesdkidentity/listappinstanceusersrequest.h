// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERSREQUEST_H
#define QTAWS_LISTAPPINSTANCEUSERSREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUsersRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstanceUsersRequest : public ChimeSdkIdentityRequest {

public:
    ListAppInstanceUsersRequest(const ListAppInstanceUsersRequest &other);
    ListAppInstanceUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceUsersRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
