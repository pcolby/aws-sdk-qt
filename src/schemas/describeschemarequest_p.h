// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMAREQUEST_P_H
#define QTAWS_DESCRIBESCHEMAREQUEST_P_H

#include "schemasrequest_p.h"
#include "describeschemarequest.h"

namespace QtAws {
namespace Schemas {

class DescribeSchemaRequest;

class DescribeSchemaRequestPrivate : public SchemasRequestPrivate {

public:
    DescribeSchemaRequestPrivate(const SchemasRequest::Action action,
                                   DescribeSchemaRequest * const q);
    DescribeSchemaRequestPrivate(const DescribeSchemaRequestPrivate &other,
                                   DescribeSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
