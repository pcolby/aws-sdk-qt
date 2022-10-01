// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTBUSESREQUEST_H
#define QTAWS_LISTEVENTBUSESREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListEventBusesRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListEventBusesRequest : public CloudWatchEventsRequest {

public:
    ListEventBusesRequest(const ListEventBusesRequest &other);
    ListEventBusesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventBusesRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
