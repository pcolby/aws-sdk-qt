// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACTIVITYSTREAMRESPONSE_H
#define QTAWS_STARTACTIVITYSTREAMRESPONSE_H

#include "rdsresponse.h"
#include "startactivitystreamrequest.h"

namespace QtAws {
namespace Rds {

class StartActivityStreamResponsePrivate;

class QTAWSRDS_EXPORT StartActivityStreamResponse : public RdsResponse {
    Q_OBJECT

public:
    StartActivityStreamResponse(const StartActivityStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartActivityStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartActivityStreamResponse)
    Q_DISABLE_COPY(StartActivityStreamResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
