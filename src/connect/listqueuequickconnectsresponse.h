// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEQUICKCONNECTSRESPONSE_H
#define QTAWS_LISTQUEUEQUICKCONNECTSRESPONSE_H

#include "connectresponse.h"
#include "listqueuequickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class ListQueueQuickConnectsResponsePrivate;

class QTAWSCONNECT_EXPORT ListQueueQuickConnectsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListQueueQuickConnectsResponse(const ListQueueQuickConnectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueueQuickConnectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueueQuickConnectsResponse)
    Q_DISABLE_COPY(ListQueueQuickConnectsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
