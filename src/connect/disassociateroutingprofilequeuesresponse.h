// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESRESPONSE_H
#define QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESRESPONSE_H

#include "connectresponse.h"
#include "disassociateroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateRoutingProfileQueuesResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociateRoutingProfileQueuesResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociateRoutingProfileQueuesResponse(const DisassociateRoutingProfileQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateRoutingProfileQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(DisassociateRoutingProfileQueuesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
