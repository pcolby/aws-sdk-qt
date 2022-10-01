// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMMEMBERSHIPSRESPONSE_H
#define QTAWS_LISTROOMMEMBERSHIPSRESPONSE_H

#include "chimeresponse.h"
#include "listroommembershipsrequest.h"

namespace QtAws {
namespace Chime {

class ListRoomMembershipsResponsePrivate;

class QTAWSCHIME_EXPORT ListRoomMembershipsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListRoomMembershipsResponse(const ListRoomMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoomMembershipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoomMembershipsResponse)
    Q_DISABLE_COPY(ListRoomMembershipsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
