// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGREEMENTRESPONSE_H
#define QTAWS_DESCRIBEAGREEMENTRESPONSE_H

#include "transferresponse.h"
#include "describeagreementrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeAgreementResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeAgreementResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeAgreementResponse(const DescribeAgreementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAgreementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgreementResponse)
    Q_DISABLE_COPY(DescribeAgreementResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
