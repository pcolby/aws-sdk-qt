// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREPAREDSTATEMENTRESPONSE_H
#define QTAWS_GETPREPAREDSTATEMENTRESPONSE_H

#include "athenaresponse.h"
#include "getpreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class GetPreparedStatementResponsePrivate;

class QTAWSATHENA_EXPORT GetPreparedStatementResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetPreparedStatementResponse(const GetPreparedStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPreparedStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPreparedStatementResponse)
    Q_DISABLE_COPY(GetPreparedStatementResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
