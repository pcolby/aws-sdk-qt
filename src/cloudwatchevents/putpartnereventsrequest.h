// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARTNEREVENTSREQUEST_H
#define QTAWS_PUTPARTNEREVENTSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutPartnerEventsRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutPartnerEventsRequest : public CloudWatchEventsRequest {

public:
    PutPartnerEventsRequest(const PutPartnerEventsRequest &other);
    PutPartnerEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPartnerEventsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
