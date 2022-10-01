// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEDGERRESPONSE_P_H
#define QTAWS_DELETELEDGERRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class DeleteLedgerResponse;

class DeleteLedgerResponsePrivate : public QldbResponsePrivate {

public:

    explicit DeleteLedgerResponsePrivate(DeleteLedgerResponse * const q);

    void parseDeleteLedgerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLedgerResponse)
    Q_DISABLE_COPY(DeleteLedgerResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
