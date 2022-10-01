// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEROOMRESPONSE_H
#define QTAWS_RESOLVEROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "resolveroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ResolveRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ResolveRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ResolveRoomResponse(const ResolveRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResolveRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveRoomResponse)
    Q_DISABLE_COPY(ResolveRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
