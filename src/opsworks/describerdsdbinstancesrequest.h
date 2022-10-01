// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERDSDBINSTANCESREQUEST_H
#define QTAWS_DESCRIBERDSDBINSTANCESREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeRdsDbInstancesRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeRdsDbInstancesRequest : public OpsWorksRequest {

public:
    DescribeRdsDbInstancesRequest(const DescribeRdsDbInstancesRequest &other);
    DescribeRdsDbInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRdsDbInstancesRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
