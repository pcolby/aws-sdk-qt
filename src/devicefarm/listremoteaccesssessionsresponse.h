// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREMOTEACCESSSESSIONSRESPONSE_H
#define QTAWS_LISTREMOTEACCESSSESSIONSRESPONSE_H

#include "devicefarmresponse.h"
#include "listremoteaccesssessionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListRemoteAccessSessionsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListRemoteAccessSessionsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListRemoteAccessSessionsResponse(const ListRemoteAccessSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRemoteAccessSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRemoteAccessSessionsResponse)
    Q_DISABLE_COPY(ListRemoteAccessSessionsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
