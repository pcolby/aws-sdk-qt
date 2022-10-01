// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLOGGINGRESPONSE_H
#define QTAWS_STARTLOGGINGRESPONSE_H

#include "cloudtrailresponse.h"
#include "startloggingrequest.h"

namespace QtAws {
namespace CloudTrail {

class StartLoggingResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT StartLoggingResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    StartLoggingResponse(const StartLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLoggingResponse)
    Q_DISABLE_COPY(StartLoggingResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
