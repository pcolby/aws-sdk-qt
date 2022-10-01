// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALCLUSTERREQUEST_H
#define QTAWS_DESCRIBEVIRTUALCLUSTERREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeVirtualClusterRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT DescribeVirtualClusterRequest : public EmrcontainersRequest {

public:
    DescribeVirtualClusterRequest(const DescribeVirtualClusterRequest &other);
    DescribeVirtualClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualClusterRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
