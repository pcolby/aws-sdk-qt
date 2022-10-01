// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONRESPONSE_H
#define QTAWS_DEAUTHORIZECONNECTIONRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "deauthorizeconnectionrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeauthorizeConnectionResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeauthorizeConnectionResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DeauthorizeConnectionResponse(const DeauthorizeConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeauthorizeConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeauthorizeConnectionResponse)
    Q_DISABLE_COPY(DeauthorizeConnectionResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
