// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTRANSACTIONRESPONSE_H
#define QTAWS_CANCELTRANSACTIONRESPONSE_H

#include "lakeformationresponse.h"
#include "canceltransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class CancelTransactionResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT CancelTransactionResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    CancelTransactionResponse(const CancelTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelTransactionResponse)
    Q_DISABLE_COPY(CancelTransactionResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
