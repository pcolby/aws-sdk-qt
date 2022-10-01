// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTRELATIONALDATABASERESPONSE_H
#define QTAWS_REBOOTRELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "rebootrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class RebootRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT RebootRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    RebootRelationalDatabaseResponse(const RebootRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootRelationalDatabaseResponse)
    Q_DISABLE_COPY(RebootRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
