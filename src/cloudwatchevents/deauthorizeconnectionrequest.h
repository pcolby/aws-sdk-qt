// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONREQUEST_H
#define QTAWS_DEAUTHORIZECONNECTIONREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeauthorizeConnectionRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeauthorizeConnectionRequest : public CloudWatchEventsRequest {

public:
    DeauthorizeConnectionRequest(const DeauthorizeConnectionRequest &other);
    DeauthorizeConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeauthorizeConnectionRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
