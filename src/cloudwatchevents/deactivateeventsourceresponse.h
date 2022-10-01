// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEEVENTSOURCERESPONSE_H
#define QTAWS_DEACTIVATEEVENTSOURCERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "deactivateeventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeactivateEventSourceResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeactivateEventSourceResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DeactivateEventSourceResponse(const DeactivateEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateEventSourceResponse)
    Q_DISABLE_COPY(DeactivateEventSourceResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
