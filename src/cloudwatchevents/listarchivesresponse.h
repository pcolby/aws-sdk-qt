// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVESRESPONSE_H
#define QTAWS_LISTARCHIVESRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "listarchivesrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListArchivesResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListArchivesResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ListArchivesResponse(const ListArchivesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListArchivesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArchivesResponse)
    Q_DISABLE_COPY(ListArchivesResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
