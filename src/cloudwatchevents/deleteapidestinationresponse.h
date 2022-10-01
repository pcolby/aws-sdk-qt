// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIDESTINATIONRESPONSE_H
#define QTAWS_DELETEAPIDESTINATIONRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "deleteapidestinationrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeleteApiDestinationResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeleteApiDestinationResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DeleteApiDestinationResponse(const DeleteApiDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApiDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiDestinationResponse)
    Q_DISABLE_COPY(DeleteApiDestinationResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
