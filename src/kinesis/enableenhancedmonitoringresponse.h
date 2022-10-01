// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEENHANCEDMONITORINGRESPONSE_H
#define QTAWS_ENABLEENHANCEDMONITORINGRESPONSE_H

#include "kinesisresponse.h"
#include "enableenhancedmonitoringrequest.h"

namespace QtAws {
namespace Kinesis {

class EnableEnhancedMonitoringResponsePrivate;

class QTAWSKINESIS_EXPORT EnableEnhancedMonitoringResponse : public KinesisResponse {
    Q_OBJECT

public:
    EnableEnhancedMonitoringResponse(const EnableEnhancedMonitoringRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableEnhancedMonitoringRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableEnhancedMonitoringResponse)
    Q_DISABLE_COPY(EnableEnhancedMonitoringResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
