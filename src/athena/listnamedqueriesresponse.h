// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDQUERIESRESPONSE_H
#define QTAWS_LISTNAMEDQUERIESRESPONSE_H

#include "athenaresponse.h"
#include "listnamedqueriesrequest.h"

namespace QtAws {
namespace Athena {

class ListNamedQueriesResponsePrivate;

class QTAWSATHENA_EXPORT ListNamedQueriesResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListNamedQueriesResponse(const ListNamedQueriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNamedQueriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamedQueriesResponse)
    Q_DISABLE_COPY(ListNamedQueriesResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
