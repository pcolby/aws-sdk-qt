// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESREQUEST_H
#define QTAWS_DESCRIBEDATASHARESREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeDataSharesRequest : public RedshiftRequest {

public:
    DescribeDataSharesRequest(const DescribeDataSharesRequest &other);
    DescribeDataSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSharesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
