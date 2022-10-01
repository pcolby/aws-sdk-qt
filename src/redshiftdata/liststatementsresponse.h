// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMENTSRESPONSE_H
#define QTAWS_LISTSTATEMENTSRESPONSE_H

#include "redshiftdataresponse.h"
#include "liststatementsrequest.h"

namespace QtAws {
namespace RedshiftData {

class ListStatementsResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT ListStatementsResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    ListStatementsResponse(const ListStatementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStatementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStatementsResponse)
    Q_DISABLE_COPY(ListStatementsResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
