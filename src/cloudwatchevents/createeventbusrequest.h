// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTBUSREQUEST_H
#define QTAWS_CREATEEVENTBUSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateEventBusRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT CreateEventBusRequest : public CloudWatchEventsRequest {

public:
    CreateEventBusRequest(const CreateEventBusRequest &other);
    CreateEventBusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventBusRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
