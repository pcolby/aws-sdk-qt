// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEEVENTSOURCERESPONSE_H
#define QTAWS_ACTIVATEEVENTSOURCERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "activateeventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ActivateEventSourceResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ActivateEventSourceResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ActivateEventSourceResponse(const ActivateEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateEventSourceResponse)
    Q_DISABLE_COPY(ActivateEventSourceResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
