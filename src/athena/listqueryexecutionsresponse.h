// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYEXECUTIONSRESPONSE_H
#define QTAWS_LISTQUERYEXECUTIONSRESPONSE_H

#include "athenaresponse.h"
#include "listqueryexecutionsrequest.h"

namespace QtAws {
namespace Athena {

class ListQueryExecutionsResponsePrivate;

class QTAWSATHENA_EXPORT ListQueryExecutionsResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListQueryExecutionsResponse(const ListQueryExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueryExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueryExecutionsResponse)
    Q_DISABLE_COPY(ListQueryExecutionsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
