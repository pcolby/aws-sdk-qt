// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTARGETSRESPONSE_H
#define QTAWS_PUTTARGETSRESPONSE_H

#include "eventbridgeresponse.h"
#include "puttargetsrequest.h"

namespace QtAws {
namespace EventBridge {

class PutTargetsResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT PutTargetsResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    PutTargetsResponse(const PutTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutTargetsResponse)
    Q_DISABLE_COPY(PutTargetsResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
