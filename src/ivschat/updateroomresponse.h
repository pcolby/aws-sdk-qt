// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMRESPONSE_H
#define QTAWS_UPDATEROOMRESPONSE_H

#include "ivschatresponse.h"
#include "updateroomrequest.h"

namespace QtAws {
namespace IvsChat {

class UpdateRoomResponsePrivate;

class QTAWSIVSCHAT_EXPORT UpdateRoomResponse : public IvsChatResponse {
    Q_OBJECT

public:
    UpdateRoomResponse(const UpdateRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoomResponse)
    Q_DISABLE_COPY(UpdateRoomResponse)

};

} // namespace IvsChat
} // namespace QtAws

#endif
