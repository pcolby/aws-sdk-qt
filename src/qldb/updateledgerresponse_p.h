// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERRESPONSE_P_H
#define QTAWS_UPDATELEDGERRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerResponse;

class UpdateLedgerResponsePrivate : public QldbResponsePrivate {

public:

    explicit UpdateLedgerResponsePrivate(UpdateLedgerResponse * const q);

    void parseUpdateLedgerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLedgerResponse)
    Q_DISABLE_COPY(UpdateLedgerResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
