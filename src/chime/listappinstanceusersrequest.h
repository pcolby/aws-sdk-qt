// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERSREQUEST_H
#define QTAWS_LISTAPPINSTANCEUSERSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstanceUsersRequestPrivate;

class QTAWSCHIME_EXPORT ListAppInstanceUsersRequest : public ChimeRequest {

public:
    ListAppInstanceUsersRequest(const ListAppInstanceUsersRequest &other);
    ListAppInstanceUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceUsersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
