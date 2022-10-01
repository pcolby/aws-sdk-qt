// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSACTIONRESPONSE_H
#define QTAWS_DESCRIBETRANSACTIONRESPONSE_H

#include "lakeformationresponse.h"
#include "describetransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class DescribeTransactionResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT DescribeTransactionResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    DescribeTransactionResponse(const DescribeTransactionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransactionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransactionResponse)
    Q_DISABLE_COPY(DescribeTransactionResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
