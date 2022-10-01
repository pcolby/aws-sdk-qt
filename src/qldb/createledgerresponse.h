// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELEDGERRESPONSE_H
#define QTAWS_CREATELEDGERRESPONSE_H

#include "qldbresponse.h"
#include "createledgerrequest.h"

namespace QtAws {
namespace Qldb {

class CreateLedgerResponsePrivate;

class QTAWSQLDB_EXPORT CreateLedgerResponse : public QldbResponse {
    Q_OBJECT

public:
    CreateLedgerResponse(const CreateLedgerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLedgerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLedgerResponse)
    Q_DISABLE_COPY(CreateLedgerResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
