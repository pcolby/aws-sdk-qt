// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEDGERRESPONSE_H
#define QTAWS_DELETELEDGERRESPONSE_H

#include "qldbresponse.h"
#include "deleteledgerrequest.h"

namespace QtAws {
namespace Qldb {

class DeleteLedgerResponsePrivate;

class QTAWSQLDB_EXPORT DeleteLedgerResponse : public QldbResponse {
    Q_OBJECT

public:
    DeleteLedgerResponse(const DeleteLedgerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLedgerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLedgerResponse)
    Q_DISABLE_COPY(DeleteLedgerResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
