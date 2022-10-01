// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEROOMMEMBERSHIPRESPONSE_H
#define QTAWS_BATCHCREATEROOMMEMBERSHIPRESPONSE_H

#include "chimeresponse.h"
#include "batchcreateroommembershiprequest.h"

namespace QtAws {
namespace Chime {

class BatchCreateRoomMembershipResponsePrivate;

class QTAWSCHIME_EXPORT BatchCreateRoomMembershipResponse : public ChimeResponse {
    Q_OBJECT

public:
    BatchCreateRoomMembershipResponse(const BatchCreateRoomMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreateRoomMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateRoomMembershipResponse)
    Q_DISABLE_COPY(BatchCreateRoomMembershipResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
