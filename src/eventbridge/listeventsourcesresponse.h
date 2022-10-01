// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCESRESPONSE_H
#define QTAWS_LISTEVENTSOURCESRESPONSE_H

#include "eventbridgeresponse.h"
#include "listeventsourcesrequest.h"

namespace QtAws {
namespace EventBridge {

class ListEventSourcesResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ListEventSourcesResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ListEventSourcesResponse(const ListEventSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSourcesResponse)
    Q_DISABLE_COPY(ListEventSourcesResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
