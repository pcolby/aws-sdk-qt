// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEEVENTSRESPONSE_H
#define QTAWS_GETRELATIONALDATABASEEVENTSRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabaseeventsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseEventsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseEventsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseEventsResponse(const GetRelationalDatabaseEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseEventsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseEventsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
