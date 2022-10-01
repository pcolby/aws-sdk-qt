// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDefaultClusterParametersRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeDefaultClusterParametersRequest : public RedshiftRequest {

public:
    DescribeDefaultClusterParametersRequest(const DescribeDefaultClusterParametersRequest &other);
    DescribeDefaultClusterParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDefaultClusterParametersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
