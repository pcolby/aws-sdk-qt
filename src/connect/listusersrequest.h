// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSREQUEST_H
#define QTAWS_LISTUSERSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListUsersRequestPrivate;

class QTAWSCONNECT_EXPORT ListUsersRequest : public ConnectRequest {

public:
    ListUsersRequest(const ListUsersRequest &other);
    ListUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
