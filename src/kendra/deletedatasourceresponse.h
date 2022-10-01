// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASOURCERESPONSE_H
#define QTAWS_DELETEDATASOURCERESPONSE_H

#include "kendraresponse.h"
#include "deletedatasourcerequest.h"

namespace QtAws {
namespace Kendra {

class DeleteDataSourceResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteDataSourceResponse : public KendraResponse {
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

} // namespace Kendra
} // namespace QtAws

#endif
