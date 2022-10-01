// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEROWSRESPONSE_H
#define QTAWS_LISTTABLEROWSRESPONSE_H

#include "honeycoderesponse.h"
#include "listtablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class ListTableRowsResponsePrivate;

class QTAWSHONEYCODE_EXPORT ListTableRowsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    ListTableRowsResponse(const ListTableRowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTableRowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableRowsResponse)
    Q_DISABLE_COPY(ListTableRowsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
