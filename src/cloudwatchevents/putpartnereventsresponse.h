// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARTNEREVENTSRESPONSE_H
#define QTAWS_PUTPARTNEREVENTSRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "putpartnereventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutPartnerEventsResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutPartnerEventsResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    PutPartnerEventsResponse(const PutPartnerEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPartnerEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPartnerEventsResponse)
    Q_DISABLE_COPY(PutPartnerEventsResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
