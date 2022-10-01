// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYWORDSFORDATASOURCERESPONSE_H
#define QTAWS_LISTKEYWORDSFORDATASOURCERESPONSE_H

#include "auditmanagerresponse.h"
#include "listkeywordsfordatasourcerequest.h"

namespace QtAws {
namespace AuditManager {

class ListKeywordsForDataSourceResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT ListKeywordsForDataSourceResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    ListKeywordsForDataSourceResponse(const ListKeywordsForDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKeywordsForDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeywordsForDataSourceResponse)
    Q_DISABLE_COPY(ListKeywordsForDataSourceResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
