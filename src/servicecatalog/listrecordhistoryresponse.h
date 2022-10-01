// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDHISTORYRESPONSE_H
#define QTAWS_LISTRECORDHISTORYRESPONSE_H

#include "servicecatalogresponse.h"
#include "listrecordhistoryrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListRecordHistoryResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListRecordHistoryResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListRecordHistoryResponse(const ListRecordHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecordHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecordHistoryResponse)
    Q_DISABLE_COPY(ListRecordHistoryResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
