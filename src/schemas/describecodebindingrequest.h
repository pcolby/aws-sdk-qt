// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEBINDINGREQUEST_H
#define QTAWS_DESCRIBECODEBINDINGREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeCodeBindingRequestPrivate;

class QTAWSSCHEMAS_EXPORT DescribeCodeBindingRequest : public SchemasRequest {

public:
    DescribeCodeBindingRequest(const DescribeCodeBindingRequest &other);
    DescribeCodeBindingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeBindingRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
