// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASERESPONSE_H
#define QTAWS_GETRELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseResponse(const GetRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
