// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLOGGINGRESPONSE_H
#define QTAWS_STOPLOGGINGRESPONSE_H

#include "cloudtrailresponse.h"
#include "stoploggingrequest.h"

namespace QtAws {
namespace CloudTrail {

class StopLoggingResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT StopLoggingResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    StopLoggingResponse(const StopLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopLoggingResponse)
    Q_DISABLE_COPY(StopLoggingResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
