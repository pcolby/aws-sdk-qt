// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSACTIONRESPONSE_H
#define QTAWS_STARTTRANSACTIONRESPONSE_H

#include "lakeformationresponse.h"
#include "starttransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class StartTransactionResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT StartTransactionResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    StartTransactionResponse(const StartTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTransactionResponse)
    Q_DISABLE_COPY(StartTransactionResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
