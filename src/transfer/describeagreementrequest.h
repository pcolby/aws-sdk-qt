// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGREEMENTREQUEST_H
#define QTAWS_DESCRIBEAGREEMENTREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeAgreementRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeAgreementRequest : public TransferRequest {

public:
    DescribeAgreementRequest(const DescribeAgreementRequest &other);
    DescribeAgreementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
