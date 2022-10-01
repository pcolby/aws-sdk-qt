// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSACTIONREQUEST_H
#define QTAWS_DESCRIBETRANSACTIONREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class DescribeTransactionRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT DescribeTransactionRequest : public LakeFormationRequest {

public:
    DescribeTransactionRequest(const DescribeTransactionRequest &other);
    DescribeTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
