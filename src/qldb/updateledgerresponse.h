// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERRESPONSE_H
#define QTAWS_UPDATELEDGERRESPONSE_H

#include "qldbresponse.h"
#include "updateledgerrequest.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerResponsePrivate;

class QTAWSQLDB_EXPORT UpdateLedgerResponse : public QldbResponse {
    Q_OBJECT

public:
    UpdateLedgerResponse(const UpdateLedgerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLedgerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLedgerResponse)
    Q_DISABLE_COPY(UpdateLedgerResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
