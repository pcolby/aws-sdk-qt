// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEBINDINGREQUEST_P_H
#define QTAWS_DESCRIBECODEBINDINGREQUEST_P_H

#include "schemasrequest_p.h"
#include "describecodebindingrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeCodeBindingRequest;

class DescribeCodeBindingRequestPrivate : public SchemasRequestPrivate {

public:
    DescribeCodeBindingRequestPrivate(const SchemasRequest::Action action,
                                   DescribeCodeBindingRequest * const q);
    DescribeCodeBindingRequestPrivate(const DescribeCodeBindingRequestPrivate &other,
                                   DescribeCodeBindingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCodeBindingRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
