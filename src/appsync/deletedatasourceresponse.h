// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASOURCERESPONSE_H
#define QTAWS_DELETEDATASOURCERESPONSE_H

#include "appsyncresponse.h"
#include "deletedatasourcerequest.h"

namespace QtAws {
namespace AppSync {

class DeleteDataSourceResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteDataSourceResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteDataSourceResponse(const DeleteDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataSourceResponse)
    Q_DISABLE_COPY(DeleteDataSourceResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
