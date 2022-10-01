// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEDBPARAMETERSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBParametersRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBParametersRequest : public RdsRequest {

public:
    DescribeDBParametersRequest(const DescribeDBParametersRequest &other);
    DescribeDBParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBParametersRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
