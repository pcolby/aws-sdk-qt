// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTBUSREQUEST_H
#define QTAWS_DELETEEVENTBUSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeleteEventBusRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeleteEventBusRequest : public CloudWatchEventsRequest {

public:
    DeleteEventBusRequest(const DeleteEventBusRequest &other);
    DeleteEventBusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventBusRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
