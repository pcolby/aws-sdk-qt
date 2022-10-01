// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONREQUEST_H
#define QTAWS_UPDATECONNECTIONREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class UpdateConnectionRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT UpdateConnectionRequest : public CloudWatchEventsRequest {

public:
    UpdateConnectionRequest(const UpdateConnectionRequest &other);
    UpdateConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectionRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
