// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREPAREDSTATEMENTSRESPONSE_H
#define QTAWS_LISTPREPAREDSTATEMENTSRESPONSE_H

#include "athenaresponse.h"
#include "listpreparedstatementsrequest.h"

namespace QtAws {
namespace Athena {

class ListPreparedStatementsResponsePrivate;

class QTAWSATHENA_EXPORT ListPreparedStatementsResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListPreparedStatementsResponse(const ListPreparedStatementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPreparedStatementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPreparedStatementsResponse)
    Q_DISABLE_COPY(ListPreparedStatementsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
