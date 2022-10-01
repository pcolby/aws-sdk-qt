// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVEREQUEST_H
#define QTAWS_CREATEARCHIVEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateArchiveRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT CreateArchiveRequest : public CloudWatchEventsRequest {

public:
    CreateArchiveRequest(const CreateArchiveRequest &other);
    CreateArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateArchiveRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
