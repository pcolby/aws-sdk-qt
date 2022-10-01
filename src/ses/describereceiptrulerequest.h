// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULEREQUEST_H
#define QTAWS_DESCRIBERECEIPTRULEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleRequestPrivate;

class QTAWSSES_EXPORT DescribeReceiptRuleRequest : public SesRequest {

public:
    DescribeReceiptRuleRequest(const DescribeReceiptRuleRequest &other);
    DescribeReceiptRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
