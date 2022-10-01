// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVEREQUEST_H
#define QTAWS_DELETEARCHIVEREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeleteArchiveRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeleteArchiveRequest : public CloudWatchEventsRequest {

public:
    DeleteArchiveRequest(const DeleteArchiveRequest &other);
    DeleteArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteArchiveRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
