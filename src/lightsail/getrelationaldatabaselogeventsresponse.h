// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGEVENTSRESPONSE_H
#define QTAWS_GETRELATIONALDATABASELOGEVENTSRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabaselogeventsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogEventsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseLogEventsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseLogEventsResponse(const GetRelationalDatabaseLogEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseLogEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseLogEventsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseLogEventsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
