// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMMEMBERSHIPRESPONSE_H
#define QTAWS_CREATEROOMMEMBERSHIPRESPONSE_H

#include "chimeresponse.h"
#include "createroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class CreateRoomMembershipResponsePrivate;

class QTAWSCHIME_EXPORT CreateRoomMembershipResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateRoomMembershipResponse(const CreateRoomMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRoomMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoomMembershipResponse)
    Q_DISABLE_COPY(CreateRoomMembershipResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
