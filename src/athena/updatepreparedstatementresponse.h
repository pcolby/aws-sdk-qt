// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPREPAREDSTATEMENTRESPONSE_H
#define QTAWS_UPDATEPREPAREDSTATEMENTRESPONSE_H

#include "athenaresponse.h"
#include "updatepreparedstatementrequest.h"

namespace QtAws {
namespace Athena {

class UpdatePreparedStatementResponsePrivate;

class QTAWSATHENA_EXPORT UpdatePreparedStatementResponse : public AthenaResponse {
    Q_OBJECT

public:
    UpdatePreparedStatementResponse(const UpdatePreparedStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePreparedStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePreparedStatementResponse)
    Q_DISABLE_COPY(UpdatePreparedStatementResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
