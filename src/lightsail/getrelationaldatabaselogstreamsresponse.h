// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASELOGSTREAMSRESPONSE_H
#define QTAWS_GETRELATIONALDATABASELOGSTREAMSRESPONSE_H

#include "lightsailresponse.h"
#include "getrelationaldatabaselogstreamsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseLogStreamsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseLogStreamsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetRelationalDatabaseLogStreamsResponse(const GetRelationalDatabaseLogStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRelationalDatabaseLogStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseLogStreamsResponse)
    Q_DISABLE_COPY(GetRelationalDatabaseLogStreamsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
