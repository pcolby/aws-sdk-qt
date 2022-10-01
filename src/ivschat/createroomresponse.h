// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMRESPONSE_H
#define QTAWS_CREATEROOMRESPONSE_H

#include "ivschatresponse.h"
#include "createroomrequest.h"

namespace QtAws {
namespace IvsChat {

class CreateRoomResponsePrivate;

class QTAWSIVSCHAT_EXPORT CreateRoomResponse : public IvsChatResponse {
    Q_OBJECT

public:
    CreateRoomResponse(const CreateRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoomResponse)
    Q_DISABLE_COPY(CreateRoomResponse)

};

} // namespace IvsChat
} // namespace QtAws

#endif
