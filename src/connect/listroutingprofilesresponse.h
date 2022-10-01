// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILESRESPONSE_H
#define QTAWS_LISTROUTINGPROFILESRESPONSE_H

#include "connectresponse.h"
#include "listroutingprofilesrequest.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfilesResponsePrivate;

class QTAWSCONNECT_EXPORT ListRoutingProfilesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListRoutingProfilesResponse(const ListRoutingProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoutingProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutingProfilesResponse)
    Q_DISABLE_COPY(ListRoutingProfilesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
