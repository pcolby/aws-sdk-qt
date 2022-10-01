// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYPRODUCTSTATUSREQUEST_H
#define QTAWS_DESCRIBECOPYPRODUCTSTATUSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeCopyProductStatusRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeCopyProductStatusRequest : public ServiceCatalogRequest {

public:
    DescribeCopyProductStatusRequest(const DescribeCopyProductStatusRequest &other);
    DescribeCopyProductStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCopyProductStatusRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
