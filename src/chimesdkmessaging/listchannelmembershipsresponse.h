// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSRESPONSE_H
#define QTAWS_LISTCHANNELMEMBERSHIPSRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "listchannelmembershipsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelMembershipsResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ListChannelMembershipsResponse(const ListChannelMembershipsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelMembershipsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMembershipsResponse)
    Q_DISABLE_COPY(ListChannelMembershipsResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
