// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASERESPONSE_H
#define QTAWS_DELETERELATIONALDATABASERESPONSE_H

#include "lightsailresponse.h"
#include "deleterelationaldatabaserequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteRelationalDatabaseResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteRelationalDatabaseResponse(const DeleteRelationalDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRelationalDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRelationalDatabaseResponse)
    Q_DISABLE_COPY(DeleteRelationalDatabaseResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
