// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEDGERSRESPONSE_H
#define QTAWS_LISTLEDGERSRESPONSE_H

#include "qldbresponse.h"
#include "listledgersrequest.h"

namespace QtAws {
namespace Qldb {

class ListLedgersResponsePrivate;

class QTAWSQLDB_EXPORT ListLedgersResponse : public QldbResponse {
    Q_OBJECT

public:
    ListLedgersResponse(const ListLedgersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLedgersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLedgersResponse)
    Q_DISABLE_COPY(ListLedgersResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
