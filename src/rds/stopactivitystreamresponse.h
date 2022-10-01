// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACTIVITYSTREAMRESPONSE_H
#define QTAWS_STOPACTIVITYSTREAMRESPONSE_H

#include "rdsresponse.h"
#include "stopactivitystreamrequest.h"

namespace QtAws {
namespace Rds {

class StopActivityStreamResponsePrivate;

class QTAWSRDS_EXPORT StopActivityStreamResponse : public RdsResponse {
    Q_OBJECT

public:
    StopActivityStreamResponse(const StopActivityStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopActivityStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopActivityStreamResponse)
    Q_DISABLE_COPY(StopActivityStreamResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
