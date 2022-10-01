// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMAREQUEST_H
#define QTAWS_DESCRIBESCHEMAREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeSchemaRequestPrivate;

class QTAWSSCHEMAS_EXPORT DescribeSchemaRequest : public SchemasRequest {

public:
    DescribeSchemaRequest(const DescribeSchemaRequest &other);
    DescribeSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
