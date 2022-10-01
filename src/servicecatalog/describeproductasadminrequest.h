// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTASADMINREQUEST_H
#define QTAWS_DESCRIBEPRODUCTASADMINREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductAsAdminRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProductAsAdminRequest : public ServiceCatalogRequest {

public:
    DescribeProductAsAdminRequest(const DescribeProductAsAdminRequest &other);
    DescribeProductAsAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProductAsAdminRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
