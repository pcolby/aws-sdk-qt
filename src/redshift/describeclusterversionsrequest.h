// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERVERSIONSREQUEST_H
#define QTAWS_DESCRIBECLUSTERVERSIONSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterVersionsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterVersionsRequest : public RedshiftRequest {

public:
    DescribeClusterVersionsRequest(const DescribeClusterVersionsRequest &other);
    DescribeClusterVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterVersionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
