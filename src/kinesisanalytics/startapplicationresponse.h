// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONRESPONSE_H
#define QTAWS_STARTAPPLICATIONRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "startapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class StartApplicationResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT StartApplicationResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    StartApplicationResponse(const StartApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartApplicationResponse)
    Q_DISABLE_COPY(StartApplicationResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
