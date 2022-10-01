// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIDESTINATIONRESPONSE_H
#define QTAWS_CREATEAPIDESTINATIONRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "createapidestinationrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateApiDestinationResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT CreateApiDestinationResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    CreateApiDestinationResponse(const CreateApiDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApiDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiDestinationResponse)
    Q_DISABLE_COPY(CreateApiDestinationResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
