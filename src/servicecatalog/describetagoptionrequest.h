// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGOPTIONREQUEST_H
#define QTAWS_DESCRIBETAGOPTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeTagOptionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeTagOptionRequest : public ServiceCatalogRequest {

public:
    DescribeTagOptionRequest(const DescribeTagOptionRequest &other);
    DescribeTagOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
