// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYOPTIONSREQUEST_H
#define QTAWS_DESCRIBEAVAILABILITYOPTIONSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAvailabilityOptionsRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeAvailabilityOptionsRequest : public CloudSearchRequest {

public:
    DescribeAvailabilityOptionsRequest(const DescribeAvailabilityOptionsRequest &other);
    DescribeAvailabilityOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailabilityOptionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
