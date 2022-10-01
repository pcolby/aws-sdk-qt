// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECORDREQUEST_P_H
#define QTAWS_DESCRIBERECORDREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describerecordrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeRecordRequest;

class DescribeRecordRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeRecordRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeRecordRequest * const q);
    DescribeRecordRequestPrivate(const DescribeRecordRequestPrivate &other,
                                   DescribeRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecordRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
