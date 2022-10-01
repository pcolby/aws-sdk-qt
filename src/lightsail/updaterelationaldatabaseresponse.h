// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATIONALDATABASERESPONSE_H
#define QTAWS_UPDATERELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "updaterelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateRelationalDatabaseResponse(const UpdateRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRelationalDatabaseResponse)
    Q_DISABLE_COPY(UpdateRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
