// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLOWSRESPONSE_H
#define QTAWS_LISTFLOWSRESPONSE_H

#include "mediaconnectresponse.h"
#include "listflowsrequest.h"

namespace QtAws {
namespace MediaConnect {

class ListFlowsResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT ListFlowsResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    ListFlowsResponse(const ListFlowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFlowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFlowsResponse)
    Q_DISABLE_COPY(ListFlowsResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
