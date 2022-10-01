// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORIGINENDPOINTREQUEST_H
#define QTAWS_DESCRIBEORIGINENDPOINTREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeOriginEndpointRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT DescribeOriginEndpointRequest : public MediaPackageRequest {

public:
    DescribeOriginEndpointRequest(const DescribeOriginEndpointRequest &other);
    DescribeOriginEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOriginEndpointRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
