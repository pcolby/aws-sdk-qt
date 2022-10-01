// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEUSERSRESPONSE_H
#define QTAWS_INVITEUSERSRESPONSE_H

#include "chimeresponse.h"
#include "inviteusersrequest.h"

namespace QtAws {
namespace Chime {

class InviteUsersResponsePrivate;

class QTAWSCHIME_EXPORT InviteUsersResponse : public ChimeResponse {
    Q_OBJECT

public:
    InviteUsersResponse(const InviteUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InviteUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InviteUsersResponse)
    Q_DISABLE_COPY(InviteUsersResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
