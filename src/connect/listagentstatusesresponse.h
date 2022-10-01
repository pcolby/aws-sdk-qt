// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGENTSTATUSESRESPONSE_H
#define QTAWS_LISTAGENTSTATUSESRESPONSE_H

#include "connectresponse.h"
#include "listagentstatusesrequest.h"

namespace QtAws {
namespace Connect {

class ListAgentStatusesResponsePrivate;

class QTAWSCONNECT_EXPORT ListAgentStatusesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListAgentStatusesResponse(const ListAgentStatusesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAgentStatusesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAgentStatusesResponse)
    Q_DISABLE_COPY(ListAgentStatusesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
