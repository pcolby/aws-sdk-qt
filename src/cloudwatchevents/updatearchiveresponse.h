// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERESPONSE_H
#define QTAWS_UPDATEARCHIVERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "updatearchiverequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class UpdateArchiveResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT UpdateArchiveResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    UpdateArchiveResponse(const UpdateArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArchiveResponse)
    Q_DISABLE_COPY(UpdateArchiveResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
