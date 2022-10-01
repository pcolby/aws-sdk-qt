// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVERECEIPTRULESETRESPONSE_H
#define QTAWS_DESCRIBEACTIVERECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "describeactivereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class DescribeActiveReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT DescribeActiveReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    DescribeActiveReceiptRuleSetResponse(const DescribeActiveReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActiveReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActiveReceiptRuleSetResponse)
    Q_DISABLE_COPY(DescribeActiveReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
