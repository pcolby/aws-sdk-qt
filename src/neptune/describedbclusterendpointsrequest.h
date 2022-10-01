// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERENDPOINTSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERENDPOINTSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterEndpointsRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBClusterEndpointsRequest : public NeptuneRequest {

public:
    DescribeDBClusterEndpointsRequest(const DescribeDBClusterEndpointsRequest &other);
    DescribeDBClusterEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterEndpointsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
