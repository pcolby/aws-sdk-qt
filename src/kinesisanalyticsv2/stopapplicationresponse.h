// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONRESPONSE_H
#define QTAWS_STOPAPPLICATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "stopapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StopApplicationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT StopApplicationResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    StopApplicationResponse(const StopApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopApplicationResponse)
    Q_DISABLE_COPY(StopApplicationResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
