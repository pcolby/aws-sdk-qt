// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTACCESSREQUEST_H
#define QTAWS_DESCRIBEENDPOINTACCESSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAccessRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeEndpointAccessRequest : public RedshiftRequest {

public:
    DescribeEndpointAccessRequest(const DescribeEndpointAccessRequest &other);
    DescribeEndpointAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
