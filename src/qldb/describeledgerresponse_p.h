// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELEDGERRESPONSE_P_H
#define QTAWS_DESCRIBELEDGERRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class DescribeLedgerResponse;

class DescribeLedgerResponsePrivate : public QldbResponsePrivate {

public:

    explicit DescribeLedgerResponsePrivate(DescribeLedgerResponse * const q);

    void parseDescribeLedgerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLedgerResponse)
    Q_DISABLE_COPY(DescribeLedgerResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
