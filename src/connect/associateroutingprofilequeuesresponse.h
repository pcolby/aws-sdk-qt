// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROUTINGPROFILEQUEUESRESPONSE_H
#define QTAWS_ASSOCIATEROUTINGPROFILEQUEUESRESPONSE_H

#include "connectresponse.h"
#include "associateroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class AssociateRoutingProfileQueuesResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateRoutingProfileQueuesResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateRoutingProfileQueuesResponse(const AssociateRoutingProfileQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateRoutingProfileQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(AssociateRoutingProfileQueuesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
