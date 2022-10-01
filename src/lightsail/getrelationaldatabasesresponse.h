// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASESRESPONSE_H
#define QTAWS_GETRELATIONALDATABASESRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabasesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabasesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabasesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabasesResponse(const GetRelationalDatabasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabasesResponse)
    Q_DISABLE_COPY(GetRelationalDatabasesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
