// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMMEMBERSHIPREQUEST_H
#define QTAWS_DELETEROOMMEMBERSHIPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteRoomMembershipRequestPrivate;

class QTAWSCHIME_EXPORT DeleteRoomMembershipRequest : public ChimeRequest {

public:
    DeleteRoomMembershipRequest(const DeleteRoomMembershipRequest &other);
    DeleteRoomMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
