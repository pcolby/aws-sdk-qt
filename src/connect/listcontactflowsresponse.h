// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWSRESPONSE_H
#define QTAWS_LISTCONTACTFLOWSRESPONSE_H

#include "connectresponse.h"
#include "listcontactflowsrequest.h"

namespace QtAws {
namespace Connect {

class ListContactFlowsResponsePrivate;

class QTAWSCONNECT_EXPORT ListContactFlowsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListContactFlowsResponse(const ListContactFlowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactFlowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactFlowsResponse)
    Q_DISABLE_COPY(ListContactFlowsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
