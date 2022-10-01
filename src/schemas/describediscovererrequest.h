// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDISCOVERERREQUEST_H
#define QTAWS_DESCRIBEDISCOVERERREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeDiscovererRequestPrivate;

class QTAWSSCHEMAS_EXPORT DescribeDiscovererRequest : public SchemasRequest {

public:
    DescribeDiscovererRequest(const DescribeDiscovererRequest &other);
    DescribeDiscovererRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
