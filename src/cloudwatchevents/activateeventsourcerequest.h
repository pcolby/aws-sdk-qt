// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEEVENTSOURCEREQUEST_H
#define QTAWS_ACTIVATEEVENTSOURCEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ActivateEventSourceRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ActivateEventSourceRequest : public CloudWatchEventsRequest {

public:
    ActivateEventSourceRequest(const ActivateEventSourceRequest &other);
    ActivateEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
