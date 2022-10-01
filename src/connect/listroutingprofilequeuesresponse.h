// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILEQUEUESRESPONSE_H
#define QTAWS_LISTROUTINGPROFILEQUEUESRESPONSE_H

#include "connectresponse.h"
#include "listroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfileQueuesResponsePrivate;

class QTAWSCONNECT_EXPORT ListRoutingProfileQueuesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListRoutingProfileQueuesResponse(const ListRoutingProfileQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoutingProfileQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(ListRoutingProfileQueuesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
