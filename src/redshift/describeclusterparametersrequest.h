// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERSREQUEST_H
#define QTAWS_DESCRIBECLUSTERPARAMETERSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParametersRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterParametersRequest : public RedshiftRequest {

public:
    DescribeClusterParametersRequest(const DescribeClusterParametersRequest &other);
    DescribeClusterParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterParametersRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
