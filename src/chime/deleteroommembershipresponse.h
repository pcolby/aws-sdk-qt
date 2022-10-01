// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMMEMBERSHIPRESPONSE_H
#define QTAWS_DELETEROOMMEMBERSHIPRESPONSE_H

#include "chimeresponse.h"
#include "deleteroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class DeleteRoomMembershipResponsePrivate;

class QTAWSCHIME_EXPORT DeleteRoomMembershipResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteRoomMembershipResponse(const DeleteRoomMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRoomMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomMembershipResponse)
    Q_DISABLE_COPY(DeleteRoomMembershipResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
