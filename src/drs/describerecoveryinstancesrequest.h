// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYINSTANCESREQUEST_H
#define QTAWS_DESCRIBERECOVERYINSTANCESREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeRecoveryInstancesRequestPrivate;

class QTAWSDRS_EXPORT DescribeRecoveryInstancesRequest : public DrsRequest {

public:
    DescribeRecoveryInstancesRequest(const DescribeRecoveryInstancesRequest &other);
    DescribeRecoveryInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecoveryInstancesRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
