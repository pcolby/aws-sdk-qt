// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEENHANCEDMONITORINGRESPONSE_H
#define QTAWS_DISABLEENHANCEDMONITORINGRESPONSE_H

#include "kinesisresponse.h"
#include "disableenhancedmonitoringrequest.h"

namespace QtAws {
namespace Kinesis {

class DisableEnhancedMonitoringResponsePrivate;

class QTAWSKINESIS_EXPORT DisableEnhancedMonitoringResponse : public KinesisResponse {
    Q_OBJECT

public:
    DisableEnhancedMonitoringResponse(const DisableEnhancedMonitoringRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableEnhancedMonitoringRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableEnhancedMonitoringResponse)
    Q_DISABLE_COPY(DisableEnhancedMonitoringResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
