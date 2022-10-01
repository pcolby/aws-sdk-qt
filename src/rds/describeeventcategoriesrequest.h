// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_H
#define QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeEventCategoriesRequestPrivate;

class QTAWSRDS_EXPORT DescribeEventCategoriesRequest : public RdsRequest {

public:
    DescribeEventCategoriesRequest(const DescribeEventCategoriesRequest &other);
    DescribeEventCategoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventCategoriesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
