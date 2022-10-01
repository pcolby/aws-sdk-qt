// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGELIMITSREQUEST_H
#define QTAWS_DESCRIBEUSAGELIMITSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeUsageLimitsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeUsageLimitsRequest : public RedshiftRequest {

public:
    DescribeUsageLimitsRequest(const DescribeUsageLimitsRequest &other);
    DescribeUsageLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUsageLimitsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
