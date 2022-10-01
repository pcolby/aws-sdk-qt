// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRELATIONALDATABASERESPONSE_H
#define QTAWS_STARTRELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "startrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class StartRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT StartRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    StartRelationalDatabaseResponse(const StartRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRelationalDatabaseResponse)
    Q_DISABLE_COPY(StartRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
