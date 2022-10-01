// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERELATIONALDATABASERESPONSE_H
#define QTAWS_CREATERELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "createrelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class CreateRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateRelationalDatabaseResponse(const CreateRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRelationalDatabaseResponse)
    Q_DISABLE_COPY(CreateRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
