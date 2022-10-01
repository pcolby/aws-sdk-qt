// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDTRANSACTIONRESPONSE_H
#define QTAWS_EXTENDTRANSACTIONRESPONSE_H

#include "lakeformationresponse.h"
#include "extendtransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class ExtendTransactionResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT ExtendTransactionResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    ExtendTransactionResponse(const ExtendTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExtendTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExtendTransactionResponse)
    Q_DISABLE_COPY(ExtendTransactionResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
