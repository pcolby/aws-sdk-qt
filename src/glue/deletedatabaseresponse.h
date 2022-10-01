// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATABASERESPONSE_H
#define QTAWS_DELETEDATABASERESPONSE_H

#include "glueresponse.h"
#include "deletedatabaserequest.h"

namespace QtAws {
namespace Glue {

class DeleteDatabaseResponsePrivate;

class QTAWSGLUE_EXPORT DeleteDatabaseResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteDatabaseResponse(const DeleteDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatabaseResponse)
    Q_DISABLE_COPY(DeleteDatabaseResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
