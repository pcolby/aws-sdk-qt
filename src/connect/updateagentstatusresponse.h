// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTSTATUSRESPONSE_H
#define QTAWS_UPDATEAGENTSTATUSRESPONSE_H

#include "connectresponse.h"
#include "updateagentstatusrequest.h"

namespace QtAws {
namespace Connect {

class UpdateAgentStatusResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateAgentStatusResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateAgentStatusResponse(const UpdateAgentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAgentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAgentStatusResponse)
    Q_DISABLE_COPY(UpdateAgentStatusResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
