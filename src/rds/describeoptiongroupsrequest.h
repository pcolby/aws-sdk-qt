// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPSREQUEST_H
#define QTAWS_DESCRIBEOPTIONGROUPSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupsRequestPrivate;

class QTAWSRDS_EXPORT DescribeOptionGroupsRequest : public RdsRequest {

public:
    DescribeOptionGroupsRequest(const DescribeOptionGroupsRequest &other);
    DescribeOptionGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptionGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
