// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIDESTINATIONREQUEST_H
#define QTAWS_UPDATEAPIDESTINATIONREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class UpdateApiDestinationRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT UpdateApiDestinationRequest : public CloudWatchEventsRequest {

public:
    UpdateApiDestinationRequest(const UpdateApiDestinationRequest &other);
    UpdateApiDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApiDestinationRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
