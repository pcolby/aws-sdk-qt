// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPEVENTSRESPONSE_H
#define QTAWS_LOOKUPEVENTSRESPONSE_H

#include "cloudtrailresponse.h"
#include "lookupeventsrequest.h"

namespace QtAws {
namespace CloudTrail {

class LookupEventsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT LookupEventsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    LookupEventsResponse(const LookupEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LookupEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookupEventsResponse)
    Q_DISABLE_COPY(LookupEventsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
