// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYTABLEROWSRESPONSE_H
#define QTAWS_QUERYTABLEROWSRESPONSE_H

#include "honeycoderesponse.h"
#include "querytablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class QueryTableRowsResponsePrivate;

class QTAWSHONEYCODE_EXPORT QueryTableRowsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    QueryTableRowsResponse(const QueryTableRowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const QueryTableRowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryTableRowsResponse)
    Q_DISABLE_COPY(QueryTableRowsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
