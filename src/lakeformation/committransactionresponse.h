// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONRESPONSE_H
#define QTAWS_COMMITTRANSACTIONRESPONSE_H

#include "lakeformationresponse.h"
#include "committransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class CommitTransactionResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT CommitTransactionResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    CommitTransactionResponse(const CommitTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CommitTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CommitTransactionResponse)
    Q_DISABLE_COPY(CommitTransactionResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
