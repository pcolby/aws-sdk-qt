// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCEREGIONSREQUEST_H
#define QTAWS_DESCRIBESOURCEREGIONSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeSourceRegionsRequestPrivate;

class QTAWSRDS_EXPORT DescribeSourceRegionsRequest : public RdsRequest {

public:
    DescribeSourceRegionsRequest(const DescribeSourceRegionsRequest &other);
    DescribeSourceRegionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSourceRegionsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
