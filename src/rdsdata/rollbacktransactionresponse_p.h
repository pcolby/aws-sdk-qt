// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKTRANSACTIONRESPONSE_P_H
#define QTAWS_ROLLBACKTRANSACTIONRESPONSE_P_H

#include "rdsdataresponse_p.h"

namespace QtAws {
namespace RdsData {

class RollbackTransactionResponse;

class RollbackTransactionResponsePrivate : public RdsDataResponsePrivate {

public:

    explicit RollbackTransactionResponsePrivate(RollbackTransactionResponse * const q);

    void parseRollbackTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RollbackTransactionResponse)
    Q_DISABLE_COPY(RollbackTransactionResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
