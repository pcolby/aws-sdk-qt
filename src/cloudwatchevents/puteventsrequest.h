// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSREQUEST_H
#define QTAWS_PUTEVENTSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutEventsRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutEventsRequest : public CloudWatchEventsRequest {

public:
    PutEventsRequest(const PutEventsRequest &other);
    PutEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
