// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLAYSRESPONSE_H
#define QTAWS_LISTREPLAYSRESPONSE_H

#include "eventbridgeresponse.h"
#include "listreplaysrequest.h"

namespace QtAws {
namespace EventBridge {

class ListReplaysResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ListReplaysResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ListReplaysResponse(const ListReplaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReplaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReplaysResponse)
    Q_DISABLE_COPY(ListReplaysResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
