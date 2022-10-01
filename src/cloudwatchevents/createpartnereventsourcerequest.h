// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNEREVENTSOURCEREQUEST_H
#define QTAWS_CREATEPARTNEREVENTSOURCEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreatePartnerEventSourceRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT CreatePartnerEventSourceRequest : public CloudWatchEventsRequest {

public:
    CreatePartnerEventSourceRequest(const CreatePartnerEventSourceRequest &other);
    CreatePartnerEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartnerEventSourceRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
