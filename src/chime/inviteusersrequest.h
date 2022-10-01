// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEUSERSREQUEST_H
#define QTAWS_INVITEUSERSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class InviteUsersRequestPrivate;

class QTAWSCHIME_EXPORT InviteUsersRequest : public ChimeRequest {

public:
    InviteUsersRequest(const InviteUsersRequest &other);
    InviteUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteUsersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
