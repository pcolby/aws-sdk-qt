// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTNEREVENTSOURCERESPONSE_H
#define QTAWS_CREATEPARTNEREVENTSOURCERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "createpartnereventsourcerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreatePartnerEventSourceResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT CreatePartnerEventSourceResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    CreatePartnerEventSourceResponse(const CreatePartnerEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePartnerEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartnerEventSourceResponse)
    Q_DISABLE_COPY(CreatePartnerEventSourceResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
