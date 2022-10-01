// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPSITEMSREQUEST_H
#define QTAWS_DESCRIBEOPSITEMSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeOpsItemsRequestPrivate;

class QTAWSSSM_EXPORT DescribeOpsItemsRequest : public SsmRequest {

public:
    DescribeOpsItemsRequest(const DescribeOpsItemsRequest &other);
    DescribeOpsItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOpsItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
