// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHUSERSREQUEST_H
#define QTAWS_SEARCHUSERSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class SearchUsersRequestPrivate;

class QTAWSCONNECT_EXPORT SearchUsersRequest : public ConnectRequest {

public:
    SearchUsersRequest(const SearchUsersRequest &other);
    SearchUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchUsersRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
