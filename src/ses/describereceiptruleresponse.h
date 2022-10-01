// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULERESPONSE_H
#define QTAWS_DESCRIBERECEIPTRULERESPONSE_H

#include "sesresponse.h"
#include "describereceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleResponsePrivate;

class QTAWSSES_EXPORT DescribeReceiptRuleResponse : public SesResponse {
    Q_OBJECT

public:
    DescribeReceiptRuleResponse(const DescribeReceiptRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReceiptRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReceiptRuleResponse)
    Q_DISABLE_COPY(DescribeReceiptRuleResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
