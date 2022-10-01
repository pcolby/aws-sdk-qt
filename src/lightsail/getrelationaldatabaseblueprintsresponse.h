// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBLUEPRINTSRESPONSE_H
#define QTAWS_GETRELATIONALDATABASEBLUEPRINTSRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabaseblueprintsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBlueprintsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseBlueprintsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseBlueprintsResponse(const GetRelationalDatabaseBlueprintsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseBlueprintsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseBlueprintsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseBlueprintsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
