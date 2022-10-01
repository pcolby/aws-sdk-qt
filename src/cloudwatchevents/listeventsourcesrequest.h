// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCESREQUEST_H
#define QTAWS_LISTEVENTSOURCESREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListEventSourcesRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListEventSourcesRequest : public CloudWatchEventsRequest {

public:
    ListEventSourcesRequest(const ListEventSourcesRequest &other);
    ListEventSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSourcesRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
