// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONSTRAINTREQUEST_H
#define QTAWS_DESCRIBECONSTRAINTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeConstraintRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeConstraintRequest : public ServiceCatalogRequest {

public:
    DescribeConstraintRequest(const DescribeConstraintRequest &other);
    DescribeConstraintRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConstraintRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
