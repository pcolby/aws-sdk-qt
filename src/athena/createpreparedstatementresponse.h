// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREPAREDSTATEMENTRESPONSE_H
#define QTAWS_CREATEPREPAREDSTATEMENTRESPONSE_H

#include "athenaresponse.h"
#include "createpreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class CreatePreparedStatementResponsePrivate;

class QTAWSATHENA_EXPORT CreatePreparedStatementResponse : public AthenaResponse {
    Q_OBJECT

public:
    CreatePreparedStatementResponse(const CreatePreparedStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePreparedStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePreparedStatementResponse)
    Q_DISABLE_COPY(CreatePreparedStatementResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
