// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRELATIONALDATABASERESPONSE_H
#define QTAWS_STOPRELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "stoprelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class StopRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT StopRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    StopRelationalDatabaseResponse(const StopRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRelationalDatabaseResponse)
    Q_DISABLE_COPY(StopRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
