// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULESETRESPONSE_H
#define QTAWS_DESCRIBERECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "describereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT DescribeReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    DescribeReceiptRuleSetResponse(const DescribeReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReceiptRuleSetResponse)
    Q_DISABLE_COPY(DescribeReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
