// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEEVENTSOURCEREQUEST_H
#define QTAWS_DEACTIVATEEVENTSOURCEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeactivateEventSourceRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeactivateEventSourceRequest : public CloudWatchEventsRequest {

public:
    DeactivateEventSourceRequest(const DeactivateEventSourceRequest &other);
    DeactivateEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
