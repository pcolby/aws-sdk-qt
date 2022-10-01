// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_H
#define QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeletePartnerEventSourceRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeletePartnerEventSourceRequest : public CloudWatchEventsRequest {

public:
    DeletePartnerEventSourceRequest(const DeletePartnerEventSourceRequest &other);
    DeletePartnerEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartnerEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
