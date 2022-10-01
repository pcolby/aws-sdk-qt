// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREPAREDSTATEMENTRESPONSE_H
#define QTAWS_DELETEPREPAREDSTATEMENTRESPONSE_H

#include "athenaresponse.h"
#include "deletepreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class DeletePreparedStatementResponsePrivate;

class QTAWSATHENA_EXPORT DeletePreparedStatementResponse : public AthenaResponse {
    Q_OBJECT

public:
    DeletePreparedStatementResponse(const DeletePreparedStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePreparedStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePreparedStatementResponse)
    Q_DISABLE_COPY(DeletePreparedStatementResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
