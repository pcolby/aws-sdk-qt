// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSREQUEST_H
#define QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeOrderableClusterOptionsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeOrderableClusterOptionsRequest : public RedshiftRequest {

public:
    DescribeOrderableClusterOptionsRequest(const DescribeOrderableClusterOptionsRequest &other);
    DescribeOrderableClusterOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrderableClusterOptionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
