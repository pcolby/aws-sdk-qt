// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMRESPONSE_H
#define QTAWS_GETROOMRESPONSE_H

#include "ivschatresponse.h"
#include "getroomrequest.h"

namespace QtAws {
namespace IvsChat {

class GetRoomResponsePrivate;

class QTAWSIVSCHAT_EXPORT GetRoomResponse : public IvsChatResponse {
    Q_OBJECT

public:
    GetRoomResponse(const GetRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoomResponse)
    Q_DISABLE_COPY(GetRoomResponse)

};

} // namespace IvsChat
} // namespace QtAws

#endif
