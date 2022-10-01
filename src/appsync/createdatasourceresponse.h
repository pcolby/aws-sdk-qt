// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCERESPONSE_H
#define QTAWS_CREATEDATASOURCERESPONSE_H

#include "appsyncresponse.h"
#include "createdatasourcerequest.h"

namespace QtAws {
namespace AppSync {

class CreateDataSourceResponsePrivate;

class QTAWSAPPSYNC_EXPORT CreateDataSourceResponse : public AppSyncResponse {
    Q_OBJECT

public:
    CreateDataSourceResponse(const CreateDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceResponse)
    Q_DISABLE_COPY(CreateDataSourceResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
