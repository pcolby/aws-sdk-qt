// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVESREQUEST_H
#define QTAWS_LISTARCHIVESREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListArchivesRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListArchivesRequest : public CloudWatchEventsRequest {

public:
    ListArchivesRequest(const ListArchivesRequest &other);
    ListArchivesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArchivesRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
