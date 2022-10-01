// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMRESPONSE_H
#define QTAWS_CREATEROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "createroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateRoomResponse : public AlexaForBusinessResponse {
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

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
