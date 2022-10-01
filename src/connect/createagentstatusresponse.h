// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTSTATUSRESPONSE_H
#define QTAWS_CREATEAGENTSTATUSRESPONSE_H

#include "connectresponse.h"
#include "createagentstatusrequest.h"

namespace QtAws {
namespace Connect {

class CreateAgentStatusResponsePrivate;

class QTAWSCONNECT_EXPORT CreateAgentStatusResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateAgentStatusResponse(const CreateAgentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAgentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAgentStatusResponse)
    Q_DISABLE_COPY(CreateAgentStatusResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
