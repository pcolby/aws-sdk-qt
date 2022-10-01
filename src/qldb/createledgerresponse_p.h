// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELEDGERRESPONSE_P_H
#define QTAWS_CREATELEDGERRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class CreateLedgerResponse;

class CreateLedgerResponsePrivate : public QldbResponsePrivate {

public:

    explicit CreateLedgerResponsePrivate(CreateLedgerResponse * const q);

    void parseCreateLedgerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLedgerResponse)
    Q_DISABLE_COPY(CreateLedgerResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
