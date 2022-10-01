// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONREQUEST_H
#define QTAWS_DESCRIBESERVICEACTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeServiceActionRequest : public ServiceCatalogRequest {

public:
    DescribeServiceActionRequest(const DescribeServiceActionRequest &other);
    DescribeServiceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
