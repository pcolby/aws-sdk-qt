// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMMEMBERSHIPRESPONSE_H
#define QTAWS_UPDATEROOMMEMBERSHIPRESPONSE_H

#include "chimeresponse.h"
#include "updateroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class UpdateRoomMembershipResponsePrivate;

class QTAWSCHIME_EXPORT UpdateRoomMembershipResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateRoomMembershipResponse(const UpdateRoomMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoomMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoomMembershipResponse)
    Q_DISABLE_COPY(UpdateRoomMembershipResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
