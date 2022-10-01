// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLAYREQUEST_H
#define QTAWS_STARTREPLAYREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class StartReplayRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT StartReplayRequest : public CloudWatchEventsRequest {

public:
    StartReplayRequest(const StartReplayRequest &other);
    StartReplayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplayRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
