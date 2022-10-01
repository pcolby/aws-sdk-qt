// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIDESTINATIONSREQUEST_H
#define QTAWS_LISTAPIDESTINATIONSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListApiDestinationsRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListApiDestinationsRequest : public CloudWatchEventsRequest {

public:
    ListApiDestinationsRequest(const ListApiDestinationsRequest &other);
    ListApiDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApiDestinationsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
