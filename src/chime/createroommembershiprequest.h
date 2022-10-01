// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMMEMBERSHIPREQUEST_H
#define QTAWS_CREATEROOMMEMBERSHIPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateRoomMembershipRequestPrivate;

class QTAWSCHIME_EXPORT CreateRoomMembershipRequest : public ChimeRequest {

public:
    CreateRoomMembershipRequest(const CreateRoomMembershipRequest &other);
    CreateRoomMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
