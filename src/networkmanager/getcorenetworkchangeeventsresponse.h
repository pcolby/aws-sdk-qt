// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGEEVENTSRESPONSE_H
#define QTAWS_GETCORENETWORKCHANGEEVENTSRESPONSE_H

#include "networkmanagerresponse.h"
#include "getcorenetworkchangeeventsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeEventsResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetCoreNetworkChangeEventsResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetCoreNetworkChangeEventsResponse(const GetCoreNetworkChangeEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreNetworkChangeEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreNetworkChangeEventsResponse)
    Q_DISABLE_COPY(GetCoreNetworkChangeEventsResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
