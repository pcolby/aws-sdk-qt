// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKTRANSACTIONRESPONSE_H
#define QTAWS_ROLLBACKTRANSACTIONRESPONSE_H

#include "rdsdataresponse.h"
#include "rollbacktransactionrequest.h"

namespace QtAws {
namespace RdsData {

class RollbackTransactionResponsePrivate;

class QTAWSRDSDATA_EXPORT RollbackTransactionResponse : public RdsDataResponse {
    Q_OBJECT

public:
    RollbackTransactionResponse(const RollbackTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RollbackTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RollbackTransactionResponse)
    Q_DISABLE_COPY(RollbackTransactionResponse)

};

} // namespace RdsData
} // namespace QtAws

#endif
