// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATABASESRESPONSE_H
#define QTAWS_LISTDATABASESRESPONSE_H

#include "athenaresponse.h"
#include "listdatabasesrequest.h"

namespace QtAws {
namespace Athena {

class ListDatabasesResponsePrivate;

class QTAWSATHENA_EXPORT ListDatabasesResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListDatabasesResponse(const ListDatabasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatabasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatabasesResponse)
    Q_DISABLE_COPY(ListDatabasesResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
