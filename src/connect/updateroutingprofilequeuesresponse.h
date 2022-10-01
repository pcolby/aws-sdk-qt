// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEQUEUESRESPONSE_H
#define QTAWS_UPDATEROUTINGPROFILEQUEUESRESPONSE_H

#include "connectresponse.h"
#include "updateroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileQueuesResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileQueuesResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateRoutingProfileQueuesResponse(const UpdateRoutingProfileQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingProfileQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileQueuesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
