// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYRESPONSE_H
#define QTAWS_QUERYRESPONSE_H

#include "kendraresponse.h"
#include "queryrequest.h"

namespace QtAws {
namespace Kendra {

class QueryResponsePrivate;

class QTAWSKENDRA_EXPORT QueryResponse : public KendraResponse {
    Q_OBJECT

public:
    QueryResponse(const QueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryResponse)
    Q_DISABLE_COPY(QueryResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
