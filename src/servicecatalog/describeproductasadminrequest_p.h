// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTASADMINREQUEST_P_H
#define QTAWS_DESCRIBEPRODUCTASADMINREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeproductasadminrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductAsAdminRequest;

class DescribeProductAsAdminRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProductAsAdminRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProductAsAdminRequest * const q);
    DescribeProductAsAdminRequestPrivate(const DescribeProductAsAdminRequestPrivate &other,
                                   DescribeProductAsAdminRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProductAsAdminRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
