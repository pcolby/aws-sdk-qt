// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELEDGERRESPONSE_H
#define QTAWS_DESCRIBELEDGERRESPONSE_H

#include "qldbresponse.h"
#include "describeledgerrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeLedgerResponsePrivate;

class QTAWSQLDB_EXPORT DescribeLedgerResponse : public QldbResponse {
    Q_OBJECT

public:
    DescribeLedgerResponse(const DescribeLedgerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLedgerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLedgerResponse)
    Q_DISABLE_COPY(DescribeLedgerResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
